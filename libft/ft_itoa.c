/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:44:35 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/29 01:23:18 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char		*tab;
	int			len;
	long int	nb;

	len = ft_intlen(n);
	nb = n;
	if (!(tab = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	tab[len--] = '\0';
	if (nb == 0)
		tab[0] = '0';
	else if (nb > 0)
		nb = -nb;
	else
		tab[0] = '-';
	while (nb != 0)
	{
		tab[len--] = (-nb) % 10 + '0';
		nb = nb / 10;
	}
	return (tab);
}
