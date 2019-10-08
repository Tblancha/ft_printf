/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_buff2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:55:16 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/01 13:55:50 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

void	flush_buff(char *buff)
{
	ft_putstr(buff);
	ft_bzero(buff, BUFF_SIZE_2);
}

int		check_buff(int i)
{
	return (BUFF_SIZE_2 - i);
}

void	buff_sec(int buff_index, char *buff)
{
	if (check_buff(buff_index) <= 1)
	{
		buff_index = 0;
		flush_buff(buff);
	}
}

int		ft_repeat_char_buff(char c, int n, char *buff)
{
	int	i;

	i = n;
	while (n > 0 && n--)
		ft_putchar_buff(c, buff);
	return (i);
}

int		ft_putchar_buff(char c, char *buff)
{
	int		buff_index;

	buff_index = ft_strlen(buff);
	if (c)
	{
		buff_sec(buff_index, buff);
		buff[buff_index] = c;
		buff_index++;
	}
	return (1);
}
