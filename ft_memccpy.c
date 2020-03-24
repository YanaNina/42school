/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:20:13 by ynina             #+#    #+#             */
/*   Updated: 2020/03/03 16:11:12 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
size_t n)
{
	unsigned char *dest;
	const unsigned char *source;
	unsigned char stop;
	size_t i;

	dest = (unsigned char*)dst;
	source = (const unsigned char*)src;
	stop = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		if (dest[i] == stop)
		{
			i++;
			return (dst + i);
		}
		i++;
	}
	return (0);
}
