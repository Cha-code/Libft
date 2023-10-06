/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:03:33 by chruhin           #+#    #+#             */
/*   Updated: 2022/11/22 08:19:57 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  The memcpy() function copies n bytes from memory area src to memory area dst.
  If dst and src overlap, behavior is undefined. Applications in which dst and
  src might overlap should use memmove(3) instead. 
 
  The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (dest);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
