/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:40:36 by chruhin           #+#    #+#             */
/*   Updated: 2022/12/10 13:02:36 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The putchar_fd() function is not a standard library function in C.
   putchar_fd() is a function that writes a single character to a specified
   file descriptor. The "fd" in the function name typically stands for
   "file descriptor."

   In general, file descriptors are integer values that represent open files
   or other input/output resources in a program. Standard file descriptors
   include stdin (0), stdout (1), and stderr (2), where input, output, and
   error streams are typically associated, respectively.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
