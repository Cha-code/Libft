/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:19 by chruhin           #+#    #+#             */
/*   Updated: 2022/11/23 16:24:14 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The memchr() function locates the first occurrence of c 
   (converted to an unsigned char) in string s.
   The memchr() function returns a pointer to the byte located,
   or NULL if no such byte exists within n bytes. 
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *) s;
	chr = (unsigned char) c;
	while (n--)
	{
		if (*str == chr)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
