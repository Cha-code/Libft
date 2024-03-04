/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:56:42 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:29:15 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   The strtrim() function is not a standard library function in C.
   strtrim() Allocates (with malloc(3)) and returns a copy of ’s1’
   with the characters specified in ’set’ removed from the beginning
   and the end of the string.

   The function ft_strtrim takes two arguments: a pointer to
   a string s1 and a pointer to a string set.
   Retruns the trimmed string.
   or NULL if the allocation fails.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*trimmed;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = (char *)ft_calloc(1, sizeof(char) * (end - start + 1));
	if (trimmed == NULL)
		return (NULL);
	while (start < end)
	{
		trimmed[i++] = s1[start++];
	}
	trimmed[i] = '\0';
	return (trimmed);
}
