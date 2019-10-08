/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ignore_flag_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:34:30 by tblancha          #+#    #+#             */
/*   Updated: 2019/09/30 05:36:15 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

void	ignore_flag_for_u(t_info_data_to_write *option)
{
	ignore_flag_priority(option, _TOKEN_FLAG_MINUS, _TOKEN_FLAG_ZERO);
	ignore_flag_priority(option, _TOKEN_FLAG_DOT, _TOKEN_FLAG_ZERO);
	ignore_flag(option, _TOKEN_FLAG_DIESE);
	ignore_flag(option, _TOKEN_FLAG_PLUS);
	ignore_flag(option, _TOKEN_FLAG_SPACE);
}

void	ignore_flag_for_c_s(t_info_data_to_write *option)
{
	ignore_flag(option, _TOKEN_FLAG_DIESE);
	ignore_flag(option, _TOKEN_FLAG_PLUS);
	ignore_flag(option, _TOKEN_FLAG_SPACE);
	if (option->type == _TOKEN_TYPE_POINTER)
		option->flag_bin = option->flag_bin | flag_to_bin(_TOKEN_FLAG_DIESE);
}

void	ignore_flag_for_none(t_info_data_to_write *option)
{
	ignore_flag(option, _TOKEN_FLAG_DIESE);
	ignore_flag(option, _TOKEN_FLAG_PLUS);
	ignore_flag(option, _TOKEN_FLAG_SPACE);
	ignore_flag(option, _TOKEN_FLAG_DOT);
}

void	ignore_flag_for_p(t_info_data_to_write *option)
{
	ignore_flag(option, _TOKEN_FLAG_PLUS);
	ignore_flag(option, _TOKEN_FLAG_SPACE);
	ignore_flag(option, _TOKEN_FLAG_ZERO);
	ignore_flag(option, _TOKEN_FLAG_DIESE);
	option->flag_bin = option->flag_bin | flag_to_bin(_TOKEN_FLAG_DIESE);
}

void	ignore_flag_priority(t_info_data_to_write *option, int strong, int weak)
{
	if (option->flag_bin & flag_to_bin(strong))
		ignore_flag(option, weak);
}
