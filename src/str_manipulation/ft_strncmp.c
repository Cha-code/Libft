/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:56:48 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:28:53 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   The strncmp() function compares only the first (at most) n bytes of
   s1 and s2. The locale is not taken into account (for a locale-aware
   comparison,see strcoll(3)).The comparison is done using unsigned characters.
   return an integer less than, equal to, or greater than zero if s1
   (or the first n bytes thereof) is found, respectively, to be less than,
   to match, or be greater than s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		i++;
	}
	return (0);
}
