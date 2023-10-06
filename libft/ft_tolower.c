/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:55:51 by chruhin           #+#    #+#             */
/*   Updated: 2023/10/06 14:10:04 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The tolower() function converts an upper-case letter to the corresponding
   lower-case letter.  The argument must be representable as an unsigned char
   or the value of EOF.

   Although the tolower() function uses the current locale, the tolower_l()
   function may be passed a locale directly. See xlocale
   for more information.

   If the argument is an upper-case letter, the tolower() function returns
   the corresponding lower-case letter if there is one; otherwise,
   the argument is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	else
		return (c);
	return (c);
}
