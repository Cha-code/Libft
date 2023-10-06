/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:19 by chruhin           #+#    #+#             */
/*   Updated: 2022/12/08 12:07:55 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The striteri() function is not a standard library function in C.
   striteri() applies a given function f to each character in a string s,
   along with its corresponding index.

   The function ft_striteri takes two arguments: a pointer to a string s and
   a function pointer f that accepts two parameters - an unsigned integer
   representing the index and a character pointer. Each character is passed by
   address to ’f’ to be modified if necessary.The function f perform some
   operation on each character in the string s.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/*
#include <stdio.h>

void	print_char_and_index(unsigned int index, char *c)
{
    printf("Index: %u, Character: %c\n", index, *c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i = 0;
    while (*s) {
        f(i, s);
        i++;
        s++;
    }
}

int main()
{
    char str[] = "Hello";

    ft_striteri(str, print_char_and_index);

    return 0;
}

*/
