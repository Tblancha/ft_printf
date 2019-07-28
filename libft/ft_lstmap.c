/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:46:23 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/26 04:36:34 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*current;
	t_list	*flst;

	if (!lst)
		return (NULL);
	begin = NULL;
	while (lst)
	{
		flst = f(lst);
		if (begin)
		{
			current->next = flst;
			current = current->next;
		}
		else
		{
			begin = flst;
			current = begin;
		}
		lst = lst->next;
	}
	return (begin);
}
