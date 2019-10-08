# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tblancha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/01 14:21:54 by tblancha          #+#    #+#              #
#    Updated: 2019/10/01 14:38:25 by tblancha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRC =		apply_precision.c \
			array_pointer_function.c \
			calcul_real_padding.c \
			convert_to_base.c \
			convert_va_arg_to_str.c \
			convert_va_arg_to_str2.c \
			dispatcher.c \
			flag_handler.c \
			flag_to_bin.c \
			ignore_flag_type.c \
			ignore_flag_type2.c \
			ft_printf.c \
			sort_flag.c \
			state_machina_parse.c \
			write_to_buff.c \
			write_to_buff2.c \


OBJ =		$(SRC:.c=.o)

HEADER =	state_machina.h

FLAG =		-Wall -Werror -Wextra

LIBFT =		libft/libft.a

$(NAME) :	lib
			@gcc $(FLAG) -c $(SRC)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)

all :		$(NAME)

lib :
			@make -C libft

clean :
			@/bin/rm -f $(OBJ)
			@make -C libft clean

fclean :	clean
			@/bin/rm -f $(NAME) ft_printf
			@make -C libft fclean

re : 		fclean all
			@make -C libft re

ssflag :
			@gcc -c $(SRC)
			@gcc $(LIBFT) $(OBJ) -o $(NAME)