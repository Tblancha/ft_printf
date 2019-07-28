/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 04:13:14 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/24 14:19:36 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	lenstr;
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	lenstr = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * lenstr + 1)))
		return (NULL);
	ft_strcpy(str, s);
	i = 0;
	while (lenstr--)
	{
		str[i] = f(str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
