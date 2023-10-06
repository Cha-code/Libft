/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:25:08 by chruhin           #+#    #+#             */
/*   Updated: 2023/06/20 08:17:22 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The split() function is not a standard library function in C.
   split() function is used to split a null-terminated string 's'
   by a specified delimiter 'c'.
   Returns The array of new strings resulting from the split.
   NULL if the allocation fails.
*/

#include "libft.h"

static int	size_of_substr(const char *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static int	count_substr(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		subword;
	char	**splited;
	size_t	size;

	i = 0;
	j = 0;
	subword = count_substr(s, c);
	splited = (char **)ft_calloc(1, sizeof(char *) * (subword + 1));
	if (splited == NULL)
		return (NULL);
	while (j < subword)
	{
		while (s[i] == c)
			i++;
		size = size_of_substr(s, c, i);
		splited[j] = ft_substr(s, i, size);
		i = i + size;
		j++;
	}
	splited[j] = (NULL);
	return (splited);
}

/*
int	main(void)
{
	char			**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split("hanged in the  lar", ' ');
	while (tab[i] != NULL)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/
