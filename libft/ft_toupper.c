/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:21:18 by chruhin           #+#    #+#             */
/*   Updated: 2022/11/07 09:52:05 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The toupper() function converts a lower-case letter to the corresponding
   upper-case letter.  The argument must be representable as an unsigned char
   or the value of EOF.

   Although the toupper() function uses the current locale, the toupper_l()
   function may be passed a locale directly. See xlocale(3) for more information.

   If the argument is a lower-case letter, the toupper() function returns the
   corresponding upper-case letter if there is one; otherwise, the argument
   is returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	else
		return (c);
	return (c);
}
