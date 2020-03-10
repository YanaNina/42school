/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 18:13:50 by ynina             #+#    #+#             */
/*   Updated: 2020/03/09 15:19:21 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			while (*s != c)
				s++;
			words++;
		}
		s++;
	}
	return (words);
}

static int	ft_wlen(char const *s, char c)
{
	int count;

	count = 0;
	while (*s && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**ar;

	i = 0;
	j = 0;
	if (!s || (!(ar = (char**)malloc(sizeof(char*) * (ft_words(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!(ar[j] = (char*)malloc(sizeof(char) * (ft_wlen(s, c) + 1))))
			return (NULL);
		while (*s && *s != c)
			ar[j][i++] = *s++;
		ar[j][i] = '\0';
		j++;
		i = 0;
	}
	return (ar);
}
