/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 04:55:43 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/24 12:09:12 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_tronc;

	if (!s)
		return (NULL);
	i = 0;
	if (!(str_tronc = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		str_tronc[i] = (char)s[start + i];
		i++;
	}
	str_tronc[i] = '\0';
	return (str_tronc);
}
