/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:56:02 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/24 01:32:37 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst < src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		d = d + len;
		s = s + len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
