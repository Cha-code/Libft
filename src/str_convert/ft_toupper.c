/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:21:18 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:27:37 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	else
		return (c);
	return (c);
}
