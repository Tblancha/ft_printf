/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:33:42 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/26 07:05:50 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, len_needle) == 0)
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
