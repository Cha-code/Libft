/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:11:41 by chruhin           #+#    #+#             */
/*   Updated: 2022/10/31 15:15:51 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  The isascii() function tests for an ASCII character, which is any character
  between 0 and octal 0177 inclusive.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c & 0x7F) == c)
		return (1);
	else
		return (0);
}
