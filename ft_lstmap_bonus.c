/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:50:10 by hirebbec          #+#    #+#             */
/*   Updated: 2021/10/25 19:25:24 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*back;

	if (!lst && !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		back = ft_lstnew((*f)(lst->content));
		if (!back)
		{	
			ft_lstclear(&back, del);
			return (NULL);
		}
		ft_lstadd_back(&new, back);
		lst = lst->next;
	}
	return (new);
}
