/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pourcent_valid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 02:43:42 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/25 02:50:33 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_pourcent_valid(t_struct *stprintf)
{
	int	i;

	i = stprintf->cut[0] + 1;
	while (stprintf->str[i])
	{
		if (istoken(stprintf, i))
		{
			stprintf->cut[1] = i;
			return (1);
		}
		else if (isflag(stprintf, i) > 0)
			i++;
		else
		{
			stprintf->cut[1] = i - 1;
			return (0);
		}
	}
	stprintf->cut[1] = i - 1;
	return (0);
}
