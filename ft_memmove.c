/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:35:47 by ynina             #+#    #+#             */
/*   Updated: 2020/03/03 16:49:24 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;

	dest = (char *)dst;
	source = (char*)src;
	while (len > 0)
	{
		*dest = *source;
		dest++;
		source++;
		len--;
	}
	return (dst);
}
