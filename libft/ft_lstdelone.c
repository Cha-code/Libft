/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cha <cha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:15:21 by chruhin           #+#    #+#             */
/*   Updated: 2023/05/11 15:10:18 by cha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Is used to delete and free the memory of a single element in a linked list.
   It takes a pointer to the element to be deleted lst and a function pointer
   del that is responsible for freeing the memory of the element's content.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del == NULL || lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
