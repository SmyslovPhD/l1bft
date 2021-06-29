/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbraum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:14:41 by kbraum            #+#    #+#             */
/*   Updated: 2021/06/29 15:28:35 by kbraum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;

	if (lst == 0)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (new == 0)
	{
		ft_lstdelone(new, del);
		return (0);
	}
	lst = lst->next;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == 0)
		{
			ft_lstclear(&new, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new, elem);
	}
	return (new);
}
