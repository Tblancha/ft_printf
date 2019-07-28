/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 04:28:26 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/24 14:25:43 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			lenstr;
	char			*str;

	if (!s)
		return (NULL);
	lenstr = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * lenstr + 1)))
		return (NULL);
	ft_strcpy(str, s);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
