/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ignore_flag_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:34:30 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/12 01:00:23 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

void	ignore_flag(t_info_data_to_write *option, int flag)
{
	if (option->flag_bin & flag_to_bin(flag))
		option->flag_bin = option->flag_bin ^ flag_to_bin(flag);
}

void	ignore_flag_for_d_i(t_info_data_to_write *option)
{
	ignore_flag_priority(option, _TOKEN_FLAG_MINUS, _TOKEN_FLAG_ZERO);
	ignore_flag_priority(option, _TOKEN_FLAG_DOT, _TOKEN_FLAG_ZERO);
	ignore_flag_priority(option, _TOKEN_FLAG_PLUS, _TOKEN_FLAG_SPACE);
	ignore_flag(option, _TOKEN_FLAG_DIESE);
}

void	ignore_flag_for_o_x_xmaj(t_info_data_to_write *option)
{
	ignore_flag_priority(option, _TOKEN_FLAG_MINUS, _TOKEN_FLAG_ZERO);
	ignore_flag_priority(option, _TOKEN_FLAG_DOT, _TOKEN_FLAG_ZERO);
	ignore_flag(option, _TOKEN_FLAG_PLUS);
	ignore_flag(option, _TOKEN_FLAG_SPACE);
}

void	ignore_flag_for_float(t_info_data_to_write *option)
{
	ignore_flag_priority(option, _TOKEN_FLAG_MINUS, _TOKEN_FLAG_ZERO);
	ignore_flag_priority(option, _TOKEN_FLAG_DOT, _TOKEN_FLAG_ZERO);
}
