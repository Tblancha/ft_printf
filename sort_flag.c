/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:36:43 by tblancha          #+#    #+#             */
/*   Updated: 2019/09/30 06:01:31 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

static void		ret_to_percent(t_token *token)
{
	while (token->list[token->index] != TOKEN_FOUND_PERCENT)
		token->index--;
	token->index++;
}

static void		check_flag_ll_hh(t_token *token,
		t_info_data_to_write *option)
{
	if (token->list[token->index] == _TOKEN_FLAG_H
			&& token->list[token->index + 1]
			== _TOKEN_FLAG_H)
	{
		option->flag_bin = option->flag_bin
			| flag_to_bin(_TOKEN_FLAG_HH);
		token->index++;
	}
	if (token->list[token->index] == _TOKEN_FLAG_L_MIN
			&& token->list[token->index + 1]
			== _TOKEN_FLAG_L_MIN)
	{
		option->flag_bin = option->flag_bin
			| flag_to_bin(_TOKEN_FLAG_LL);
		token->index++;
	}
}

static int		fill_precision_or_padding(t_token *token,
		char *str_original, t_info_data_to_write *option, int precision_done)
{
	if ((option->flag_bin & flag_to_bin(_TOKEN_FLAG_DOT))
		&& precision_done == 0)
	{
		precision_done = 1;
		option->precision = ft_atoi(str_original + token->index);
	}
	if (option->padding == 0
		&& token->list[token->index]
		== _TOKEN_FLAG_NUMBER
		&& !(option->flag_bin & flag_to_bin(_TOKEN_FLAG_DOT)))
		option->padding = ft_atoi(str_original + token->index);
	return (precision_done);
}

void			convert_flag_enum_to_bin(t_token *token,
		char *str_original, t_info_data_to_write *option)
{
	int	precision_done;

	precision_done = 0;
	option->end_flag = token->index;
	ret_to_percent(token);
	while (token->index < option->end_flag)
	{
		if (flag_to_bin(token->list[token->index]))
		{
			option->flag_bin = option->flag_bin
			| flag_to_bin(token->list[token->index]);
			check_flag_ll_hh(token, option);
		}
		if (token->list[token->index] == _TOKEN_FLAG_NUMBER)
			precision_done = fill_precision_or_padding(token, str_original,
			option, precision_done);
		token->index++;
	}
}
