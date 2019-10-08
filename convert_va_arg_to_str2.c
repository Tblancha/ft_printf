/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_va_arg_to_str.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:13:54 by tblancha          #+#    #+#             */
/*   Updated: 2019/09/30 05:14:41 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

char			*do_nada(__attribute__((unused)) va_list arg,
__attribute__((unused)) t_info_data_to_write *option)
{
	option->len_arg = 1;
	return (option->current_char);
}

char			*convert_c_to_str(va_list arg, t_info_data_to_write *option)
{
	static char	str[2];
	char		*tricks;
	int			c;

	tricks = &str[0];
	option->type = _TOKEN_TYPE_CHAR;
	option->len_arg = 1;
	c = va_arg(arg, int);
	str[0] = c;
	str[1] = '\0';
	return (tricks);
}

char			*convert_s_to_str(va_list arg, t_info_data_to_write *option)
{
	char	*data_to_write_str;

	option->type = _TOKEN_TYPE_STR;
	data_to_write_str = (char*)va_arg(arg, char *);
	if (data_to_write_str == NULL)
		data_to_write_str = "(null)";
	return (data_to_write_str);
}

char			*convert_p_to_str(va_list arg, t_info_data_to_write *option)
{
	char	*data_to_write_str;

	option->len_arg = 9;
	data_to_write_str = convert_to_base_min_ulong(va_arg(arg, unsigned long),
			16);
	return (data_to_write_str);
}

char			*convert_d_to_str(va_list arg, t_info_data_to_write *option)
{
	char	*data_to_write;
	long	number;

	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_HH))
		number = (char)va_arg(arg, int);
	else if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_H))
		number = (short)va_arg(arg, int);
	else if ((option->flag_bin & flag_to_bin(_TOKEN_FLAG_L_MIN))
			|| (option->flag_bin & flag_to_bin(_TOKEN_FLAG_LL)))
		number = (long)va_arg(arg, long);
	else
		number = (int)va_arg(arg, int);
	data_to_write = convert_to_base_long(number, 10);
	return (data_to_write);
}
