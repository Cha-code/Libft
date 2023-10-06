/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:23:39 by chruhin           #+#    #+#             */
/*   Updated: 2022/11/22 08:25:08 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The memmove() function is a standard library function in C that is used to
   copy a block of memory from a source location to a destination location.
   It ensures that the copying is performed correctly even if the source and
   destination memory regions overlap.

   The memmove() function copies len bytes from string src to string dst.
   The two strings may overlap; the copy is always done in a non-destructive
   manner.

   The memmove() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (dest);
	if (src < dest)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
