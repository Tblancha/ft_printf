/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:15:16 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/12 01:01:07 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"
#include <stdio.h>

int				ret_type_index(int *token, int index)
{
	while ((token[index] != _TOKEN_TYPE_CHAR
				&& token[index] != _TOKEN_TYPE_STR
				&& token[index] != _TOKEN_TYPE_POINTER
				&& token[index] != _TOKEN_TYPE_INT
				&& token[index] != _TOKEN_TYPE_UNSIGNED_INT
				&& token[index] != _TOKEN_TYPE_I
				&& token[index] != _TOKEN_TYPE_FLOAT
				&& token[index] != _TOKEN_TYPE_HEX_MIN
				&& token[index] != _TOKEN_TYPE_HEX_MAJ
				&& token[index] != _TOKEN_TYPE_OCTAL
				&& token[index] != _TOKEN_TYPE_PERCENT
				&& token[index] != _TOKEN_TYPE_NONE)
			&& token[index])
	{
		index++;
	}
	return (index);
}

static void		initialize_option_to_zero(t_info_data_to_write *option)
{
	option->flag_bin = 0;
	option->end_flag = 0;
	option->type = 0;
	option->padding = 0;
	option->precision = 0;
	option->len_arg = 0;
}

int				dispatch_type(t_token *token_utils, char *str, t_buff *buffer_s,
		va_list arg)
{
	char					*data_to_write_str;
	t_info_data_to_write	option;

	initialize_option_to_zero(&option);
	option.current_char[0] = str[token_utils->index];
	option.current_char[1] = '\0';
	option.type = token_utils->list[ret_type_index(token_utils->list,
			token_utils->index)];
	convert_flag_enum_to_bin(token_utils, str, &option);
	data_to_write_str = pf_conversion_to_use(option.type)(arg, &option);
	pf_dispatch_ignore_flag(option.type)(&option);
	option.len_arg = ft_strlen(data_to_write_str);
	option.padding = pf_dispatch_calcul_padding(option.type)(&option,
			data_to_write_str);
	apply_flag_router(buffer_s, data_to_write_str, &option);
	return (0);
}

int				dispatcher(t_token *token_utils, char *str_original,
		va_list args, t_buff *buffer_s)
{
	int	i;

	i = 0;
	ft_bzero(buffer_s->buff, BUFF_SIZE_2 - 1);
	while ((size_t)i < ft_strlen(str_original))
	{
		if (token_utils->list[i] == TOKEN_IS_CHARACTER)
		{
			buffer_s->len_total += ft_putchar_buff(str_original[i],
			buffer_s->buff);
		}
		else if (token_utils->list[i] == TOKEN_FOUND_PERCENT)
		{
			i++;
			token_utils->flag_start_index = i;
			token_utils->index = ret_type_index(token_utils->list, i);
			token_utils->flag_end_index = token_utils->index;
			dispatch_type(token_utils, str_original, buffer_s, args);
		}
		i++;
	}
	ft_putstr_fd(buffer_s->buff, 1);
	ft_bzero(buffer_s->buff, BUFF_SIZE_2 - 1);
	return (buffer_s->len_total);
}
