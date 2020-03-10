/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 18:04:05 by ynina             #+#    #+#             */
/*   Updated: 2020/03/09 16:08:17 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(*s));
	i = 0;
	while (*s)
	{
		str[i] = f(*s);
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
