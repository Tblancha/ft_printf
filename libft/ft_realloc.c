/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 15:01:15 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/14 00:46:15 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *ptr, size_t size)
{
	char	*str;
	size_t	len;

	if (!ptr)
		return (NULL);
	len = ft_strlen(ptr);
	if (!(str = (char*)malloc(sizeof(char) * len + size + 1)))
		return (NULL);
	if (!(str = ft_memcpy(str, ptr, len)))
		return (NULL);
	str[len] = '\0';
	return (str);
}
