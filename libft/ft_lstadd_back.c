/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cha <cha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:55:53 by chruhin           #+#    #+#             */
/*   Updated: 2023/05/11 15:01:29 by cha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   adds a new element (new) to the end of a linked list (*lst).
   It takes in the address of the pointer to the first element of the list
   (lst) and the new element to be added (new).
*/

#include "libft.h"

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
