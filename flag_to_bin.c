/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_to_bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:26:27 by tblancha          #+#    #+#             */
/*   Updated: 2019/09/30 05:27:43 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

int		flag_to_bin(int flag)
{
	static int	flag_bin[NUMBER_ELEMENT_ENUM] = {
		[_TOKEN_FLAG_HH] = 1,
		[_TOKEN_FLAG_H] = 2,
		[_TOKEN_FLAG_LL] = 4,
		[_TOKEN_FLAG_L_MIN] = 8,
		[_TOKEN_FLAG_PLUS] = 16,
		[_TOKEN_FLAG_SPACE] = 32,
		[_TOKEN_FLAG_MINUS] = 64,
		[_TOKEN_FLAG_ZERO] = 128,
		[_TOKEN_FLAG_DIESE] = 256,
		[_TOKEN_FLAG_L_MAJ] = 512,
		[_TOKEN_FLAG_DOT] = 1024,
	};

	return (flag_bin[flag]);
}
