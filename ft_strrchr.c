/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:14:47 by ynina             #+#    #+#             */
/*   Updated: 2020/03/09 17:51:29 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char*)s);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
