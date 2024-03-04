/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:57:20 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:25:28 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   The isprint() function tests for any printing character,
   including space (` '). The value of the argument must be representable
   as an unsigned char or the value of EOF.
   In the ASCII character set, this includes the characters 'sp' to '~'.

   The isprint() function returns zero if the character tests false and returns
   non-zero if the character tests true.
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
