/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:15:21 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:24:00 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   Is used to delete and free the memory of a single element in a linked list.
   It takes a pointer to the element to be deleted lst and a function pointer
   del that is responsible for freeing the memory of the element's content.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del == NULL || lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
