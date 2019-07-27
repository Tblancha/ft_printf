/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:38:40 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/25 02:43:03 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				istoken(t_struct *stprintf, int i)
{
	return (stprintf->str[i] == 'c' || stprintf->str[i] == 's'
			|| stprintf->str[i] == 'p' || stprintf->str[i] == 'd'
			|| stprintf->str[i] == 'i' || stprintf->str[i] == 'o'
			|| stprintf->str[i] == 'u' || stprintf->str[i] == 'x'
			|| stprintf->str[i] == 'X' || stprintf->str[i] == 'f');
}

int				isflag(t_struct *stprintf, int i)
{
	if (stprintf->str[i] == '#' || stprintf->str[i] == '+'
			|| stprintf->str[i] == '-' || stprintf->str[i] == ' '
			|| stprintf->str[i] == '.' || stprintf->str[i] == 'L')
		return (1);
	else if (stprintf->str[i] == '0'
			&& !ft_isdigit(stprintf->str[i - 1]))
		return (1);
	else if (stprintf->str[i] == 'h')
	{
		if (stprintf->str[i + 1] && stprintf->str[i + 1] == 'h')
			return (2);
		return (1);
	}
	else if (stprintf->str[i] == 'l')
	{
		if (stprintf->str[i + 1] && stprintf->str[i + 1] == 'l')
			return (2);
		return (1);
	}
	return (0);
}
static int		findpourcent(t_struct *stprintf)
{
	int	i;

	i = stprintf->cut[0];
	while (stprintf->str[i])
	{
		if (stprintf->str[i] == '%')
		{
			stprintf->cut[0] = i;
			return (1);
		}
		i++;
	}
	return (0);
}

int				parsing(t_struct *stprintf)
{
	int	i;

	i = 0;
	if (!findpourcent(stprintf))
		return (0);
	i = stprintf->cut[0] + 1;
	while (stprintf->str[i])
	{
		if (stprintf->str[i] == '%')
		{
			i++;
			if (stprintf->str[stprintf->cut[0]] == '%')
			{
				stprintf->iflag[(int)%] = 1;
				return (1);
			}
			while (stprintf->cut[0]
		}
		i++;
	}
}
