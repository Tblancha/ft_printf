/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 02:15:58 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/24 06:08:14 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	lens;
	size_t	i;
	char	*src;

	src = (char*)s;
	lens = ft_strlen(src) + 1;
	i = 0;
	while (lens--)
	{
		if (src[i] == (char)c)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
