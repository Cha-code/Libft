/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cha <cha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:23:01 by chruhin           #+#    #+#             */
/*   Updated: 2023/05/11 15:11:29 by cha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   The function ft_lstiter applies a given function f to each element in a
   linked list. It iterates through the list and applies the function to the
   content of each element.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL || lst == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
