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

/*
0 :  abc 4
1:   abc 5
2:   abc 6
3:   abc 7

4:   abc 7
5:   abco 7
6:   abcop 7
7:   abcopq 7
8:   abcopqr  7
9:   abcopqr   7
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dlen;
	size_t slen;
	int i;

	dlen = ft_strlen((char*)dst);
	slen = ft_strlen((char*)src);
	i = 0;
	if (dstsize < dlen)
		return (slen + dstsize);
	while (src[i] != '\0' && dlen < (dstsize - 1))
		{
			dst[dlen+i] = src[i];
			i++;
			dstsize--;
		}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
