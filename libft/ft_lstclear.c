/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cha <cha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:19:09 by chruhin           #+#    #+#             */
/*   Updated: 2023/05/11 15:08:45 by cha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Is used to delete and free the memory of all elements in a linked list. It
   takes a pointer to the head of the list lst and a function pointer del that
   is responsible for freeing the memory of each individual element's content.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst != NULL && del != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
