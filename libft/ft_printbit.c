/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 03:33:03 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/14 03:51:11 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbit(int bin)
{
	size_t power;

	power = 32;
	if (bin < 0)
	{
		ft_putchar('-');
		bin = -bin;
	}
	while (power-- != 0)
	{
		if (bin >= ft_pow(2, power))
		{
			ft_putchar('1');
			bin = bin - ft_pow(2, power);
		}
		else
			ft_putchar('0');
		if (power % 8 == 0)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}
