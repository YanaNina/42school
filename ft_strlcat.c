/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:26:52 by ynina             #+#    #+#             */
/*   Updated: 2020/03/03 18:03:17 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t n)
{
	int len;
	int space;
	int i;
	int j;

	len = ft_strlen(dst);
	space = n - 1 - len;
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[i] != '\0' && j <= space)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + 1);
}
