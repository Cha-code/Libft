/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:19 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:26:00 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   The memchr() function locates the first occurrence of c
   (converted to an unsigned char) in string s.
   The memchr() function returns a pointer to the byte located,
   or NULL if no such byte exists within n bytes.
*/

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
