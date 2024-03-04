/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:25:12 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:24:26 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   The function ft_lstmap creates a new linked list by applying a given
   function f to each element in the original linked list lst.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;

	if (lst == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp = f(lst->content);
		if (!temp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, ft_lstnew((void *)temp));
		lst = lst->next;
	}
	return (new_list);
}
