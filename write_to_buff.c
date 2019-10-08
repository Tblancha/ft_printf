/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_buff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:54:41 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/01 13:56:34 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

int		ft_putstr_buff(char *str, char *buff, int buff_index, int n)
{
	int i;

	i = 0;
	while (str[i] && i < n)
	{
		buff[buff_index] = str[i];
		i++;
		buff_index++;
	}
	buff[buff_index] = '\0';
	return (i);
}

int		buff_n_manager(char *data_to_write, char *buff, int size)
{
	int		buff_index;

	buff_index = ft_strlen(buff);
	if (!(*data_to_write))
		return (-1);
	buff_sec(buff_index, buff);
	if ((int)check_buff(buff_index) > size + 1)
	{
		buff_index = ft_putstr_buff(data_to_write, buff,
				buff_index, size);
		buff_sec(buff_index, buff);
	}
	else
	{
		flush_buff(buff);
		buff_index = 0;
		ft_putstr_buff(data_to_write, buff, buff_index, size);
	}
	return (size);
}

int		buff_manager(char *data_to_write, char *buff)
{
	int		buff_index;

	buff_index = ft_strlen(buff);
	if (!(*data_to_write))
		return (-1);
	buff_sec(buff_index, buff);
	if ((size_t)check_buff(buff_index) > ft_strlen(data_to_write) + 1)
	{
		buff_index = ft_putstr_buff(data_to_write, buff, buff_index,
				ft_strlen(data_to_write));
		buff_sec(buff_index, buff);
	}
	else
	{
		flush_buff(buff);
		buff_index = 0;
		ft_putstr_buff(data_to_write, buff, buff_index,
				ft_strlen(data_to_write));
	}
	return (ft_strlen(data_to_write));
}
