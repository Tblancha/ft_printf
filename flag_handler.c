/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:17:47 by tblancha          #+#    #+#             */
/*   Updated: 2019/09/30 05:25:29 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"
#include <stdio.h>

static char		*correction_precision_padding_flag_zero(char *data_to_write,
		t_info_data_to_write *option)
{
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_DOT))
	{
		if (option->precision < option->len_arg)
		{
			while (*data_to_write == '0')
			{
				data_to_write += 1;
				option->len_arg--;
				if (option->padding > 0)
					option->padding++;
			}
		}
		if (*data_to_write == '-')
			option->precision += 1;
	}
	return (data_to_write);
}

void			apply_flag_router(t_buff *buffer_s, char *data_to_write,
		t_info_data_to_write *option)
{
	data_to_write = correction_precision_padding_flag_zero(data_to_write,
			option);
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_SPACE))
		if (*data_to_write != '-')
			buffer_s->len_total += ft_putchar_buff(' ', buffer_s->buff);
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_DIESE) && (option->flag_bin & flag_to_bin(_TOKEN_FLAG_ZERO)))
		buffer_s->len_total += prefix_router(buffer_s->buff, option);
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_ZERO))
		buffer_s->len_total += ft_repeat_char_buff('0', option->padding, buffer_s->buff);
	else if (!(option->flag_bin & flag_to_bin(_TOKEN_FLAG_MINUS)))
	{
		printf("buffer dans flag_handler = %d\n", buffer_s->len_total);
		buffer_s->len_total += ft_repeat_char_buff(' ', option->padding, buffer_s->buff);
		printf("buffer dans flag_handler = %d\n", buffer_s->len_total);
	}
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_DIESE) && !(option->flag_bin & flag_to_bin(_TOKEN_FLAG_ZERO)))
		buffer_s->len_total += prefix_router(buffer_s->buff, option);
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_PLUS))
	{
		if (data_to_write[0] == '-')
			buffer_s->len_total += ft_putchar_buff(*data_to_write++, buffer_s->buff);
		else
			buffer_s->len_total += ft_putchar_buff('+', buffer_s->buff);
	}
	else if (option->type == _TOKEN_TYPE_I || option->type == _TOKEN_TYPE_INT)
		if (data_to_write[0] == '-')
			buffer_s->len_total += ft_putchar_buff(*data_to_write++, buffer_s->buff);
	pf_apply_precision(option->type)(buffer_s, data_to_write, option);
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_MINUS))
		buffer_s->len_total += ft_repeat_char_buff(' ', option->padding, buffer_s->buff);
}

int			prefix_router(char *buff, t_info_data_to_write *option)
{
	if (option->type == _TOKEN_TYPE_HEX_MAJ)
	{
		buff_manager("0X", buff);
		return (2);
	}
	else if (option->type == _TOKEN_TYPE_HEX_MIN || option->type == _TOKEN_TYPE_POINTER)
	{
		buff_manager("0x", buff);
		return (2);
	}		
	else if (option->type == _TOKEN_TYPE_OCTAL)
	{
		ft_putchar_buff('0', buff);
		return (1);
	}
	return (0);
}
