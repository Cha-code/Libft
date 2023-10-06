/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:57:03 by chruhin           #+#    #+#             */
/*   Updated: 2023/06/19 15:49:31 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The strrchr() function locates the last occurrence of c
   (converted to a char) in the string pointed to by s.
   The terminating null character is considered to be part of the string;
   therefore if c is `\0', the functions locate the terminating `\0'.

   The functions strrchr() return a pointer to the located character,
   or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len != '\0')
	{
		if (s[len] == (unsigned char) c)
			return ((char *)(s + len));
		len--;
	}
	if (s[len] == (char)c)
		return ((char *)s + len);
	return (NULL);
}
