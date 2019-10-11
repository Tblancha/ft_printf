/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:08:27 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/01 13:46:14 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"
#include <stdio.h>
int		apply_precision_cs(t_buff *buffer_s, char *data_to_write,
		t_info_data_to_write *option)
{
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_DOT))
	{
		if (option->precision < option->len_arg)
			buffer_s->len_total += buff_n_manager(data_to_write, buffer_s->buff,
			option->precision);
		else
			buffer_s->len_total += buff_manager(data_to_write, buffer_s->buff);
	}
	else
		buffer_s->len_total += buff_manager(data_to_write, buffer_s->buff);
	return (0);
}

int		apply_precision_pdiouxxmaj(t_buff *buffer_s,
		char *data_to_write, t_info_data_to_write *option)
{
	if (option->type == _TOKEN_TYPE_OCTAL
	&& (option->flag_bin & flag_to_bin(_TOKEN_FLAG_DIESE)))
		option->precision--;
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_DOT))
		if (option->precision > option->len_arg)
			buffer_s->len_total += ft_repeat_char_buff('0',
					(option->precision - option->len_arg), buffer_s->buff);
	buffer_s->len_total += buff_manager(data_to_write, buffer_s->buff);
	return (0);
}
