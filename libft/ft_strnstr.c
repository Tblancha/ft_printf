/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 04:59:32 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/26 07:07:05 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char*)haystack);
	while (haystack[i] && (i + len_needle <= len))
	{
		if (ft_strncmp(haystack + i, needle, len_needle) == 0)
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
