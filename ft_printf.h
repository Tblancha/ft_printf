/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:26:40 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/24 02:53:15 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.d>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.a"

typedef struct		s_struct
{
	int		iflag[256];
	int		cut[2];
	char	*str;
}					t_struct;	
