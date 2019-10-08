/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_machina.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:53:48 by tblancha          #+#    #+#             */
/*   Updated: 2019/10/01 15:57:47 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATE_MACHINA_H
# define STATE_MACHINA_H

# include "./libft/libft.h"
# include <stdarg.h>
# define BUFF_SIZE_2		4096
# define ABS(Value)			(Value < 0 ? -Value : Value)

typedef	enum				e_token_types
{
	TOKEN_START_STR,
	TOKEN_IS_CHARACTER,
	TOKEN_FOUND_PERCENT,
	_TOKEN_TYPE_CHAR,
	_TOKEN_TYPE_STR,
	_TOKEN_TYPE_POINTER,
	_TOKEN_TYPE_INT,
	_TOKEN_TYPE_UNSIGNED_INT,
	_TOKEN_TYPE_I,
	_TOKEN_TYPE_FLOAT,
	_TOKEN_TYPE_HEX_MIN,
	_TOKEN_TYPE_HEX_MAJ,
	_TOKEN_TYPE_OCTAL,
	_TOKEN_TYPE_PERCENT,
	_TOKEN_LEN_FIELD,
	_TOKEN_PRECISION,
	_TOKEN_TYPE_NONE,
	_TOKEN_FLAG_HH,
	_TOKEN_FLAG_LL,
	_TOKEN_FLAG_H,
	_TOKEN_FLAG_L_MIN,
	_TOKEN_FLAG_L_MAJ,
	_TOKEN_FLAG_DIESE,
	_TOKEN_FLAG_SPACE,
	_TOKEN_FLAG_MINUS,
	_TOKEN_FLAG_PLUS,
	_TOKEN_FLAG_ZERO,
	_TOKEN_FLAG_DOT,
	_TOKEN_FLAG_NUMBER,
	TOKEN_END_STR,
	NUMBER_ELEMENT_ENUM,
}							t_token_types;

/*
 ** ________ STRUCTURE
*/
typedef struct				s_token
{
	int		*list;
	int		index;
	int		flag_start_index;
	int		flag_end_index;
}							t_token;

typedef struct				s_buff
{
	char	buff[BUFF_SIZE_2];
	int		index;
	int		len_total;
}							t_buff;

typedef struct				s_info_data_to_write
{
	int				flag_bin;
	int				end_flag;
	t_token_types	type;
	int				padding;
	int				precision;
	int				len_arg;
	char			current_char[2];
}							t_info_data_to_write;

/*
 ** ________ TYPEDEF ARRAY POINTER FUNCTION
*/
typedef char				*(*t_pf_dispatch_type)(va_list arg,
		t_info_data_to_write *option);
typedef void				(*t_pf_dispatch_ignore_flag)
	(t_info_data_to_write *);
typedef int					(*t_pf_calcul_padding)
	(t_info_data_to_write *, char *);
typedef int					(*t_pf_apply_precision)
	(t_buff *, char *, t_info_data_to_write *);

/*
 ** _______ FONCTION PRINCIPAL
*/
int		ft_printf(char *str, ...);

/*
 ** ________ STATE_MACHINA_PARSE
*/
int							*recognize_tokens(char **str, t_token *token);
void						print_token_list(int *token_list);

/*
 ** ________ DISPATCHER
*/
t_pf_dispatch_type			pf_conversion_to_use(int type);
int							dispatch_type(t_token *token_utils, char *str,
		t_buff *buffer_s, va_list arg);
int							dispatcher(t_token *token_utils, char *str_original,
		va_list args, t_buff *buffer_s);
int							ret_type_index(int *list, int index);

/*
 ** ________ WRITE_TO_BUFF
*/
int							ft_putstr_buff(char *str, char *buff,
		int buff_index, int n);
int							buff_n_manager(char *data_to_write, char *buff,
		int size);
int							buff_manager(char *data_to_write, char *buff);
void						flush_buff(char *buff);
void						buff_sec(int buff_index, char *buff);
int							check_buff(int i);
int							ft_repeat_char_buff(char c, int n, char *buff);
int							ft_putchar_buff(char c, char *buff);

/*
 ** ________ CONVERT_TO BASE
*/
char						*convert_to_base_ulong
(unsigned long number_to_convert, const unsigned int base);
char						*convert_to_base_min_ulong
(unsigned long number_to_convert, const unsigned int base);
char						*convert_to_base_long(long number_to_convert,
		const unsigned int base);
char						*convert_to_base_min_long(long number_to_convert,
		const unsigned int base);

/*
 ** ________ CONVERT_VA_ARG_TO_STR
*/
char						*do_nada(va_list arg,
		t_info_data_to_write *option);
char						*convert_c_to_str(va_list arg,
		t_info_data_to_write *option);
char						*convert_s_to_str(va_list arg,
		t_info_data_to_write *option);
char						*convert_p_to_str(va_list arg,
		t_info_data_to_write *option);
char						*convert_d_to_str(va_list arg,
		t_info_data_to_write *option);
char						*convert_octal_to_str(va_list arg,
		t_info_data_to_write *option);
char						*convert_uint_to_str(va_list arg,
		t_info_data_to_write *option);
char						*convert_hex_min_to_str(va_list arg,
		t_info_data_to_write *option);
char						*convert_hex_maj_to_str(va_list arg,
		t_info_data_to_write *option);

/*
 ** ________ FLAG_TO_BIN
*/
int							flag_to_bin(int flag);

/*
 ** ________ CONVERSIONS USED IN PRINTING
*/
char						*apply_flags(char *converted_num,
		t_token token_utils);

/*
 ** ________ SORT_FLAG USED IN DISPATCHER
*/
void						convert_flag_enum_to_bin(t_token *token,
		char *str_original, t_info_data_to_write *option);

/*
 ** ________ PADDING'S_VALUE
*/
t_pf_calcul_padding			pf_dispatch_calcul_padding(int type);
int							real_value_of_padding_c_s
(t_info_data_to_write *option, char *data_to_write);
int							real_value_of_padding_pdiuxxmaj
(t_info_data_to_write *option, char *data_to_write);
int							real_value_of_padding_o
(t_info_data_to_write *option, char *data_to_write);

/*
 **  ________ FLAG_HANDLER
*/
void						apply_flag_router(t_buff *buff,
		char *data_to_write, t_info_data_to_write *option);
int							prefix_router(char *buff,
		t_info_data_to_write *option);

/*
 ** ________ IGNORE_FLAG
*/
t_pf_dispatch_ignore_flag	pf_dispatch_ignore_flag(int type);
void						ignore_flag_for_d_i(t_info_data_to_write *option);
void						ignore_flag_for_o_x_xmaj
(t_info_data_to_write *option);
void						ignore_flag_for_u(t_info_data_to_write *option);
void						ignore_flag_for_c_s(t_info_data_to_write *option);
void						ignore_flag_for_p(t_info_data_to_write *option);
void						ignore_flag_for_none(t_info_data_to_write *option);
void						ignore_flag(t_info_data_to_write *option, int flag);
void						ignore_flag_priority(t_info_data_to_write *option,
		int strong, int weak);

/*
 ** ________ APPLY_PRECISION
*/
t_pf_apply_precision		pf_apply_precision(int type);
int							apply_precision_cs(t_buff *buff, char *data_to_write,
		t_info_data_to_write *option);
int							apply_precision_pdiouxxmaj(t_buff *buff,
		char *data_to_write, t_info_data_to_write *option);

#endif
