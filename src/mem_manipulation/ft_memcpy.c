/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:03:33 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:26:17 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  The memcpy() function copies n bytes from memory area src to memory area dst.
  If dst and src overlap, behavior is undefined. Applications in which dst and
  src might overlap should use memmove(3) instead.

  The memcpy() function returns the original value of dst.
*/

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
