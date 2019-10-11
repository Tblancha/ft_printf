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

char			*convert_octal_to_str(va_list arg, t_info_data_to_write *option)
{
	char			*data_to_write;
	unsigned long	number;

	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_HH))
		number = (unsigned char)va_arg(arg, unsigned int);
	else if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_H))
		number = (unsigned short)va_arg(arg, unsigned int);
	else if ((option->flag_bin & flag_to_bin(_TOKEN_FLAG_L_MIN))
			|| (option->flag_bin & flag_to_bin(_TOKEN_FLAG_LL)))
		number = (unsigned long long)va_arg(arg, unsigned long long);
	else
		number = (unsigned int)va_arg(arg, unsigned int);
	data_to_write = convert_to_base_long(number, 8);
	return (data_to_write);
}

char			*convert_uint_to_str(va_list arg, t_info_data_to_write *option)
{
	char			*data_to_write;
	unsigned long	number;

	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_HH))
		number = (unsigned char)va_arg(arg, unsigned int);
	else if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_H))
		number = (unsigned short)va_arg(arg, unsigned int);
	else if ((option->flag_bin & flag_to_bin(_TOKEN_FLAG_L_MIN))
			|| (option->flag_bin & flag_to_bin(_TOKEN_FLAG_LL)))
		number = (unsigned long long)va_arg(arg, unsigned long long);
	else
		number = (unsigned int)va_arg(arg, unsigned int);
	data_to_write = convert_to_base_ulong(number, 10);
	return (data_to_write);
}

char			*convert_hex_min_to_str(va_list arg,
		t_info_data_to_write *option)
{
	char			*data_to_write;
	unsigned long	number;

	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_HH))
		number = (unsigned char)va_arg(arg, unsigned int);
	else if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_H))
		number = (unsigned short)va_arg(arg, unsigned int);
	else if ((option->flag_bin & flag_to_bin(_TOKEN_FLAG_L_MIN))
			|| (option->flag_bin & flag_to_bin(_TOKEN_FLAG_LL)))
		number = (unsigned long long)va_arg(arg, unsigned long long);
	else
		number = (unsigned int)va_arg(arg, unsigned int);
	data_to_write = convert_to_base_min_long(number, 16);
	return (data_to_write);
}

char			*convert_hex_maj_to_str(va_list arg,
		t_info_data_to_write *option)
{
	char			*data_to_write;
	unsigned long	number;

	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_HH))
		number = (unsigned char)va_arg(arg, unsigned int);
	else if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_H))
		number = (unsigned short)va_arg(arg, unsigned int);
	else if ((option->flag_bin & flag_to_bin(_TOKEN_FLAG_L_MIN))
			|| (option->flag_bin & flag_to_bin(_TOKEN_FLAG_LL)))
		number = (unsigned long long)va_arg(arg, unsigned long long);
	else
		number = (unsigned int)va_arg(arg, unsigned int);
	data_to_write = convert_to_base_long(number, 16);
	return (data_to_write);
}

char			*convert_float_to_str(va_list arg,
		t_info_data_to_write *option)
{
	char			*data_to_write;
	long double		number;

	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_L_MIN))
		number = va_arg(arg, long double);
	else if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_L_MAJ))
		number = va_arg(arg, long double);
	else
		number = va_arg(arg, double);
	data_to_write = convert_float(number);
	return (data_to_write);
}