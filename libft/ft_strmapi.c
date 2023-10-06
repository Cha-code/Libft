/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:42:22 by chruhin           #+#    #+#             */
/*   Updated: 2022/12/08 12:08:49 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The strmapi() function is not a standard library function in C.
   strmapi() applies a given function f to each character in a string s,
   along with its corresponding index.

   The function ft_strmapi takes two arguments: a pointer to a string s and a
   function pointer f that accepts two parameters - an unsigned integer
   representing the index and a character. The function f performs
   some operation on each character in the string 's' and the result of this
   operation is saved to a newly created string 'new_str'
   malloc is used to dynamically allocate memory for the new string.
  
   Returns The string created from the successive applications of ’f’.
   or NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)ft_calloc(1, sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
