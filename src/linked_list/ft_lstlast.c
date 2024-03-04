/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:04:46 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:24:18 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   The function ft_lstlast returns a pointer to the last element of a linked
   list. It takes as input a pointer to the first element of the list (lst).
*/

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
