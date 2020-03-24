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
	unsigned char *dest;
	unsigned char *source;

	if (dst == src)
		return (dst); 
	else if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{	
		dest = (unsigned char *)dst;
		source = (unsigned char*)src;
		while (len > 0)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	}
	return (dst);
}
