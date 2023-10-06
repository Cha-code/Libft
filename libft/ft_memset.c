/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:06:27 by chruhin           #+#    #+#             */
/*   Updated: 2022/11/04 12:58:11 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The memset() function writes len bytes of value c
   (converted to an unsigned char) to the string b.
   The memset() function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		p[n] = (unsigned char)c;
	}
	return (s);
}
