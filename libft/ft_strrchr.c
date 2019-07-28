/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 02:38:19 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/23 06:55:27 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*src;

	src = (char*)s;
	i = ft_strlen(src);
	i = i + 1;
	while (i != 0)
	{
		i--;
		if (src[i] == (char)c)
			return (&src[i]);
	}
	return (NULL);
}
