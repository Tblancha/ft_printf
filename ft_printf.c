/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 00:56:50 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/12 00:59:39 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

static void		delete_list(int *token)
{
	if (token && *token)
		free(token);
}

int				ft_printf(char *str, ...)
{
	t_token			token_utils;
	va_list			args;
	t_buff			buffer_s;

	va_start(args, str);
	if (!(token_utils.list = (int *)malloc(sizeof(int) * 4096)))
		return (-1);
	token_utils.index = 0;
	token_utils.list = recognize_tokens(&str, &token_utils);
	token_utils.index = 0;
	buffer_s.index = 0;
	buffer_s.len_total = 0;
	dispatcher(&token_utils, str, args, &buffer_s);
	delete_list(token_utils.list);
	return (buffer_s.len_total);
}
