/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 01:40:21 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/26 10:48:14 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnewlen(size_t index, char c, char const *s)
{
	size_t	len;

	len = 0;
	while ((char)s[index] != c && (char)s[index] != '\0')
	{
		index++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	index;
	size_t	nbword;
	size_t	len;
	char	**tab;

	if (!s)
		return (NULL);
	nbword = ft_countword(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * nbword + 1)))
		return (NULL);
	index = 0;
	nbword = 0;
	while ((char)s[index])
	{
		while (s[index] == c && s[index] != '\0')
			index++;
		if (s[index] == '\0')
			break ;
		len = ft_strnewlen(index, c, s);
		tab[nbword++] = ft_strsub(s, index, len);
		while (s[index] != c && s[index] != '\0')
			index++;
	}
	tab[nbword] = NULL;
	return (tab);
}
