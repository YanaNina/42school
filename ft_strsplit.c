/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 18:13:50 by ynina             #+#    #+#             */
/*   Updated: 2020/03/02 20:18:07 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_words(char const *s, char c)
{
	int i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c)
				i++;
			words++;
		}
		i++;
	}
	return(words);

static int ft_wlen(char const *s, charc)
{
	int count = 0;
	while (*s) 
	   	*s != c)
	{
		count++;
		s++

	

char **ft_strsplit(char const *s, char c)
{

	char **ar;
	ar = (char**)malloc(sizeof(char*) *(ft_words(s,c) + 1));
	if (!ar)
		return NULL;
	*ar[i]



