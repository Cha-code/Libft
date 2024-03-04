/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:33:29 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:24:34 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   creates a new element for a linked list and initializes its content with
   the given content value. It returns a pointer to the newly created element.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)ft_calloc(1, sizeof(t_list));
	if (new_element == NULL)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
