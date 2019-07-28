/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 01:59:52 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/24 04:09:16 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s;
	size_t	i;

	s = (char*)src;
	i = 0;
	while (s[i] && i < len)
	{
		dst[i] = s[i];
		i++;
	}
	while (i < len)
		dst[i++] = 0;
	return (dst);
}
