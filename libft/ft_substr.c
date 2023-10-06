/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:55:16 by chruhin           #+#    #+#             */
/*   Updated: 2023/10/06 14:09:55 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The substr() function is not a standard library function in C.
   substr() Allocates (with malloc) and returns a substring from the
   string ’s’.
   The substring begins at index ’start’ and is of maximum size ’len’.

   The function ft_substr takes three arguments: a pointer to a string 's'
   from which to create the substring and an unsigned integer 'start' which
   indicates the start of the substring in the string 's' and an unsigned
   integer 'len' which should be the maximum length of the substring.

   Returns the substring. or NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int position, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (position >= slen)
		len = 0;
	if (len >= slen - position)
		len = slen - position;
	substr = (char *)ft_calloc(1, sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i++] = s[position++];
	}
	substr[i] = '\0';
	return (substr);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	substr = (char *)ft_calloc(1, sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}


int	main(void)
{
	char	*substr;

	// char const str1[]= "454-585-921-983A";
	// char const str2[]= "hola";
	// char const str3[]= "";

	substr = ft_substr("hola!", 4294967295, 18446744073709551615);

	printf("Required substring is \"%s\"\n", substr);

	return (0);
}
*/
