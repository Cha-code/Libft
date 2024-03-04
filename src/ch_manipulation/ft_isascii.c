/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:11:41 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:25:11 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  The isascii() function tests for an ASCII character, which is any character
  between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	if ((c & 0x7F) == c)
		return (1);
	else
		return (0);
}
