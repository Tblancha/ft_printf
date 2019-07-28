/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 00:53:18 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/29 01:35:21 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	unsigned long	lenstr;
	size_t			start;
	char			*str;
	unsigned int	i;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	lenstr = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[start]))
		start++;
	if (!s[start])
		return (ft_strnew(1));
	while (ft_iswhitespace(s[lenstr]))
		lenstr--;
	if (!(str = (char *)malloc(sizeof(char) * lenstr + 2)))
		return (NULL);
	while (start <= lenstr)
		if (s[start])
			str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
