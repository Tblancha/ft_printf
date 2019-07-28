/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 20:39:39 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/22 22:55:52 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cpynext;

	while (*alst)
	{
		cpynext = (*alst)->next;
		ft_lstdelone(alst, (*del));
		*alst = cpynext;
	}
	*alst = NULL;
}
