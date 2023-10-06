/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cha <cha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:14:11 by chruhin           #+#    #+#             */
/*   Updated: 2023/05/11 15:04:40 by cha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   adds a new element to the front of a linked list. It takes as input a
   pointer to a pointer to the first element of the list (lst) and a pointer
   to the new element to be added (new).
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}
