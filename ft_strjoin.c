/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:10:45 by ynina             #+#    #+#             */
/*   Updated: 2020/03/03 16:07:12 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = (ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1);
	new_string = (char*)malloc(sizeof(char) * len);
	if (!new_string || !s1 || !s2)
		return (0);
	ft_strcpy(new_string, (char *)s1);
	ft_strcat(new_string, (char *)s2);
	return (new_string);
}
