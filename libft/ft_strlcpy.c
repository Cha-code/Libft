/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:22:14 by chruhin           #+#    #+#             */
/*   Updated: 2022/11/23 16:08:14 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   copies & concatenates strings,takes the full size of buffer not just length
   and guarantees to NUL-terminate the result as long as there is at least one
   byte free in dest a byte for the NUL should be included in size. src musst
   be NUL-terminated. copies up to size - 1 characters from NUL-terminated
   string src to dest, and NUL-terminates the result. returns total len of src
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i + 1 < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
