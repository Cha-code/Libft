/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:57 by chruhin           #+#    #+#             */
/*   Updated: 2023/06/19 15:57:50 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The strnstr() function locates the first occurrence of the null-terminated
   string needle in the string haystack, where not more than len characters
   are searched. Characters that appear after a `\0' character are not
   searched. Since the strnstr() function is a FreeBSD specific API,
   it should only be used when portability is not a concern.

   If needle is an empty string, haystack is returned; if needle occurs
   no where in haystack, NULL is returned; otherwise a pointer to the first
   character of the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*haysack;
	char	*needle;
	size_t	i;
	size_t	length;

	haysack = (char *) big;
	needle = (char *) little;
	length = ft_strlen(needle);
	i = 0;
	if (needle[i] == '\0')
		return (haysack);
	while (haysack[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((haysack + i), needle, length) == 0)
		{
			return (haysack + i);
		}
		i++;
	}
	return (NULL);
}
