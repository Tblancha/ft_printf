/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_real_padding.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:09:51 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/11 05:25:14 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

int	real_value_of_padding_c_s(t_info_data_to_write *option,
		char *data_to_write)
{
	int	real_padding;

	data_to_write += 0;
	real_padding = option->padding;
	if (option->precision >= option->len_arg
			|| !(option->flag_bin & flag_to_bin(_TOKEN_FLAG_DOT)))
		real_padding -= option->len_arg;
	else
		real_padding -= option->precision;
	if (real_padding < 0)
		real_padding = 0;
	return (real_padding);
}

int	real_value_of_padding_pdiuxxmaj(t_info_data_to_write *option,
		char *data_to_write)
{
	int		real_padding;

	real_padding = option->padding;
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_DIESE))
		real_padding -= 2;
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_SPACE))
		if (*data_to_write != '-')
			real_padding -= 1;
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_PLUS))
		if (data_to_write[0] != '-')
			real_padding -= 1;
	if (!(option->flag_bin & flag_to_bin(_TOKEN_FLAG_SPACE))
			&& !(option->flag_bin & flag_to_bin(_TOKEN_FLAG_PLUS))
			&& *data_to_write == '-')
	{
		real_padding -= 1;
		option->len_arg--;
	}
	if (option->precision > option->len_arg)
		real_padding -= option->precision;
	else
		real_padding -= option->len_arg;
	if (real_padding < 0)
		real_padding = 0;
	return (real_padding);
}

int	real_value_of_padding_o(t_info_data_to_write *option,
		char *data_to_write)
{
	int		real_padding;

	data_to_write += 0;
	real_padding = option->padding;
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_DIESE))
		real_padding -= 1;
	if (option->flag_bin & flag_to_bin(_TOKEN_FLAG_SPACE))
		real_padding -= 1;
	if (option->precision >= option->len_arg)
		real_padding -= option->precision;
	else
		real_padding -= option->len_arg;
	if (real_padding < 0)
		real_padding = 0;
	return (real_padding);
}
