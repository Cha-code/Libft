/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cha <cha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:59:10 by chruhin           #+#    #+#             */
/*   Updated: 2023/05/11 15:13:51 by cha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The function ft_lstsize calculates the size of a linked list by counting
   the number of elements in it.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	lst = NULL;
	return (size);
}
