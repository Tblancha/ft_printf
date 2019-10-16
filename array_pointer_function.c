/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ignore_flag_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:34:30 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/11 05:23:51 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

t_pf_dispatch_ignore_flag
	pf_dispatch_ignore_flag(int type)
{
	static t_pf_dispatch_ignore_flag	array[NUMBER_ELEMENT_ENUM];

	array[_TOKEN_TYPE_CHAR] = ignore_flag_for_c_s;
	array[_TOKEN_TYPE_STR] = ignore_flag_for_c_s;
	array[_TOKEN_TYPE_POINTER] = ignore_flag_for_p;
	array[_TOKEN_TYPE_INT] = ignore_flag_for_d_i;
	array[_TOKEN_TYPE_I] = ignore_flag_for_d_i;
	array[_TOKEN_TYPE_OCTAL] = ignore_flag_for_o_x_xmaj;
	array[_TOKEN_TYPE_UNSIGNED_INT] = ignore_flag_for_u;
	array[_TOKEN_TYPE_HEX_MIN] = ignore_flag_for_o_x_xmaj;
	array[_TOKEN_TYPE_HEX_MAJ] = ignore_flag_for_o_x_xmaj;
	array[_TOKEN_TYPE_NONE] = ignore_flag_for_none;
	array[_TOKEN_TYPE_PERCENT] = ignore_flag_for_none;
	array[_TOKEN_TYPE_FLOAT] = ignore_flag_for_float;
	return (array[type]);
}

t_pf_calcul_padding
	pf_dispatch_calcul_padding(int type)
{
	static t_pf_calcul_padding		array[NUMBER_ELEMENT_ENUM];

	array[_TOKEN_TYPE_CHAR] = real_value_of_padding_c_s;
	array[_TOKEN_TYPE_STR] = real_value_of_padding_c_s;
	array[_TOKEN_TYPE_POINTER] = real_value_of_padding_pdiuxxmaj;
	array[_TOKEN_TYPE_INT] = real_value_of_padding_pdiuxxmaj;
	array[_TOKEN_TYPE_I] = real_value_of_padding_pdiuxxmaj;
	array[_TOKEN_TYPE_OCTAL] = real_value_of_padding_o;
	array[_TOKEN_TYPE_UNSIGNED_INT] = real_value_of_padding_pdiuxxmaj;
	array[_TOKEN_TYPE_HEX_MIN] = real_value_of_padding_pdiuxxmaj;
	array[_TOKEN_TYPE_HEX_MAJ] = real_value_of_padding_pdiuxxmaj;
	array[_TOKEN_TYPE_NONE] = real_value_of_padding_c_s;
	array[_TOKEN_TYPE_PERCENT] = real_value_of_padding_c_s;
	array[_TOKEN_TYPE_FLOAT] = real_value_of_padding_pdiuxxmaj;
	return (array[type]);
}

t_pf_dispatch_type
	pf_conversion_to_use(int type)
{
	static t_pf_dispatch_type		array[NUMBER_ELEMENT_ENUM];

	array[_TOKEN_TYPE_CHAR] = convert_c_to_str;
	array[_TOKEN_TYPE_STR] = convert_s_to_str;
	array[_TOKEN_TYPE_POINTER] = convert_p_to_str;
	array[_TOKEN_TYPE_INT] = convert_d_to_str;
	array[_TOKEN_TYPE_I] = convert_d_to_str;
	array[_TOKEN_TYPE_OCTAL] = convert_octal_to_str;
	array[_TOKEN_TYPE_UNSIGNED_INT] = convert_uint_to_str;
	array[_TOKEN_TYPE_HEX_MIN] = convert_hex_min_to_str;
	array[_TOKEN_TYPE_HEX_MAJ] = convert_hex_maj_to_str;
	array[_TOKEN_TYPE_PERCENT] = do_nada;
	array[_TOKEN_TYPE_NONE] = do_nada;
	array[_TOKEN_TYPE_FLOAT] = convert_float_to_str;
	return (array[type]);
}

t_pf_apply_precision
	pf_apply_precision(int type)
{
	static t_pf_apply_precision	array[NUMBER_ELEMENT_ENUM];

	array[_TOKEN_TYPE_CHAR] = apply_precision_cs;
	array[_TOKEN_TYPE_STR] = apply_precision_cs;
	array[_TOKEN_TYPE_POINTER] = apply_precision_pdiouxxmaj;
	array[_TOKEN_TYPE_INT] = apply_precision_pdiouxxmaj;
	array[_TOKEN_TYPE_I] = apply_precision_pdiouxxmaj;
	array[_TOKEN_TYPE_OCTAL] = apply_precision_pdiouxxmaj;
	array[_TOKEN_TYPE_UNSIGNED_INT] = apply_precision_pdiouxxmaj;
	array[_TOKEN_TYPE_HEX_MIN] = apply_precision_pdiouxxmaj;
	array[_TOKEN_TYPE_HEX_MAJ] = apply_precision_pdiouxxmaj;
	array[_TOKEN_TYPE_FLOAT] = apply_precision_pdiouxxmaj;
	array[_TOKEN_TYPE_NONE] = apply_precision_cs;
	array[_TOKEN_TYPE_PERCENT] = apply_precision_cs;
	return (array[type]);
}
