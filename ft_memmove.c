/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:35:47 by ynina             #+#    #+#             */
/*   Updated: 2020/03/09 20:34:47 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;
	size_t i;

	dest = (char *)dst;
	source = (char*)src;
	if (dst == src)
		return (dst);
	if (dest > source)

	
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
