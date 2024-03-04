/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:55:53 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:23:21 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   adds a new element (new) to the end of a linked list (*lst).
   It takes in the address of the pointer to the first element of the list
   (lst) and the new element to be added (new).
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	list = ft_lstlast(*lst);
	list->next = new;
}
