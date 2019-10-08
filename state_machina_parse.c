/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_machina_parse.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:57:42 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/01 14:05:01 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

static const t_token_types	g_get_token_flag[256] = {
	['h'] = _TOKEN_FLAG_H,
	['l'] = _TOKEN_FLAG_L_MIN,
	['L'] = _TOKEN_FLAG_L_MAJ,
	['#'] = _TOKEN_FLAG_DIESE,
	[' '] = _TOKEN_FLAG_SPACE,
	['-'] = _TOKEN_FLAG_MINUS,
	['+'] = _TOKEN_FLAG_PLUS,
	['0'] = _TOKEN_FLAG_ZERO,
	['.'] = _TOKEN_FLAG_DOT,
};

static const t_token_types		g_get_token_type[256] = {
	['c'] = _TOKEN_TYPE_CHAR,
	['s'] = _TOKEN_TYPE_STR,
	['p'] = _TOKEN_TYPE_POINTER,
	['d'] = _TOKEN_TYPE_INT,
	['u'] = _TOKEN_TYPE_UNSIGNED_INT,
	['i'] = _TOKEN_TYPE_I,
	['f'] = _TOKEN_TYPE_FLOAT,
	['x'] = _TOKEN_TYPE_HEX_MIN,
	['X'] = _TOKEN_TYPE_HEX_MAJ,
	['o'] = _TOKEN_TYPE_OCTAL,
	['%'] = _TOKEN_TYPE_PERCENT,
};

static int		parse_percent_types(const char *str_p, t_token *token)
{
	t_token_types	type;

	if ((type = g_get_token_type[(unsigned char)str_p[token->index]]))
		token->list[token->index] = type;
	else
		token->list[token->index] = _TOKEN_TYPE_NONE;
	return (token->index);
}

static int		token_is_number(const char *str_p, t_token *token)
{
	if (ft_isdigit(str_p[token->index]) && str_p[token->index] != '0')
	{
		while (ft_isdigit(str_p[token->index]))
		{
			token->list[token->index] = _TOKEN_FLAG_NUMBER;
			token->index++;
		}
	}
	return (token->index);
}

static int		parse_percent_flags(const char *str_p, t_token *token)
{
	t_token_types flags;

	token_is_number(str_p, token);
	if ((flags = g_get_token_flag[(unsigned char)str_p[token->index]]))
		token->list[token->index] = flags;
	while (token->list[token->index] != 0 && str_p[token->index])
	{
		token->index++;
		token_is_number(str_p, token);
		if ((flags = g_get_token_flag[(unsigned char)str_p[token->index]]))
			token->list[token->index] = flags;
	}
	return (token->index);
}

static void		fill_token(char **str, t_token *token,
		t_token_types current_token, int i)
{
	while (current_token != TOKEN_END_STR && (size_t)i <= ft_strlen(*str))
	{
		if (!(*str)[i])
		{
			current_token = TOKEN_END_STR;
			token->list[i] = current_token;
			break ;
		}
		else if ((*str)[i] == '%')
		{
			current_token = TOKEN_FOUND_PERCENT;
			token->list[i] = current_token;
			i++;
			token->index = i;
			i = parse_percent_flags(*str, token);
			i = parse_percent_types(*str, token);
		}
		else
		{
			current_token = TOKEN_IS_CHARACTER;
			token->list[i] = current_token;
		}
		i++;
	}
}

int				*recognize_tokens(char **str, t_token *token)
{
	t_token_types	current_token;
	int				i;

	i = 0;
	if (!str || !(*str))
	{
		ft_putstr_fd("String does not exist.\n", 2);
		return (NULL);
	}
	while (i < 500)
		token->list[i++] = 0;
	i = 0;
	current_token = TOKEN_START_STR;
	token->list[i] = current_token;
	fill_token(str, token, current_token, i);
	return (token->list);
}

/*
   void	print_list(int *list)
   {
   const char	*const token_tab[NUMBER_ELEMENT_ENUM] = {[TOKEN_START_STR] 			= ">>> token : TOKEN_START_STR\n",
   [TOKEN_IS_CHARACTER]		= ">>> token : TOKEN_IS_CHARARACTER\n",
   [TOKEN_FOUND_PERCENT]		= ">>> token : TOKEN_FOUND_PERCENT\n",
   [_TOKEN_TYPE_CHAR]			= ">>> token : _TOKEN_TYPE_CHAR\n",
   [_TOKEN_TYPE_STR]			= ">>> token : _TOKEN_TYPE_STR\n",
   [_TOKEN_TYPE_POINTER]		= ">>> token : _TOKEN_TYPE_POINTER\n",
   [_TOKEN_TYPE_INT]			= ">>> token : _TOKEN_TYPE_INT\n",
   [_TOKEN_TYPE_UNSIGNED_INT]	= ">>> token : _TOKEN_TYPE_UNSIGNED_INT\n",
   [_TOKEN_TYPE_I]				= ">>> token : _TOKEN_TYPE_I\n",
   [_TOKEN_TYPE_FLOAT]			= ">>> token : _TOKEN_TYPE_FLOAT\n",
   [_TOKEN_TYPE_HEX_MIN]		= ">>> token : _TOKEN_TYPE_HEX_MIN\n",
   [_TOKEN_TYPE_HEX_MAJ]		= ">>> token : _TOKEN_TYPE_HEX_MAJ\n",
   [_TOKEN_TYPE_OCTAL]			= ">>> token : _TOKEN_TYPE_OCTAL\n",
   [_TOKEN_TYPE_PERCENT]		= ">>> token : _TOKEN_TYPE_PERCENT\n",
   [_TOKEN_LEN_FIELD]			= ">>> token : _TOKEN_LEN_FIELD\n",
   [_TOKEN_PRECISION]			= ">>> token : _TOKEN_PRECISION\n",
   [_TOKEN_TYPE_NONE]			= ">>> token : _TOKEN_TYPE_NONE\n",
   [_TOKEN_FLAG_HH]			= ">>> token : _TOKEN_FLAG_HH\n",
   [_TOKEN_FLAG_LL]			= ">>> token : _TOKEN_FLAG_LL\n",
   [_TOKEN_FLAG_H]				= ">>> token : _TOKEN_FLAG_H\n",
   [_TOKEN_FLAG_L_MIN]			= ">>> token : _TOKEN_FLAG_L_MIN\n",
   [_TOKEN_FLAG_L_MAJ]			= ">>> token : _TOKEN_FLAG_L_MAJ\n",
   [_TOKEN_FLAG_DIESE]			= ">>> token : _TOKEN_FLAG_DIESE\n",
   [_TOKEN_FLAG_SPACE]			= ">>> token : _TOKEN_FLAG_SPACE\n",
   [_TOKEN_FLAG_MINUS]			= ">>> token : _TOKEN_FLAG_MINUS\n",
   [_TOKEN_FLAG_PLUS]			= ">>> token : _TOKEN_FLAG_PLUS\n",
   [_TOKEN_FLAG_ZERO]			= ">>> token : _TOKEN_FLAG_ZERO\n",
   [_TOKEN_FLAG_DOT]			= ">>> token : _TOKEN_FLAG_DOT\n",
   [_TOKEN_FLAG_NUMBER]		= ">>> token : _TOKEN_FLAG_NUMBER\n",
   [TOKEN_END_STR]				= ">>> token : TOKEN_END_STR\n"};
   while (*list)
   ft_putstr_fd(token_tab[*list++], 1);
   }
   */
