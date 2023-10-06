/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cha <cha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:04:46 by chruhin           #+#    #+#             */
/*   Updated: 2023/05/11 15:03:11 by cha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The function ft_lstlast returns a pointer to the last element of a linked
   list. It takes as input a pointer to the first element of the list (lst).
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*list;

	if (lst == NULL)
		return (lst);
	list = lst;
	while (list != NULL)
	{
		if (list->next == NULL)
			return (list);
		list = list->next;
	}
	return (lst);
}
