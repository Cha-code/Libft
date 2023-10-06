/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cha <cha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:33:29 by chruhin           #+#    #+#             */
/*   Updated: 2023/05/11 15:25:34 by cha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   creates a new element for a linked list and initializes its content with
   the given content value. It returns a pointer to the newly created element.
*/

#include "libft.h"

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
