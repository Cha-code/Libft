/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:16:29 by chruhin           #+#    #+#             */
/*   Updated: 2024/03/03 11:26:51 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   The putendl_fd() function is not a standard library function in C.
   putendl_fd() function writes a string followed by a newline character
   to a specified file descriptor.

   file descriptors are integer values that represent open files or other
   input/output resources in a program. Standard file descriptors include
   stdin (0),stdout (1), and stderr (2), where input, output, and error
   streams are typically associated, respectively.
*/

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
