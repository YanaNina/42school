/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:34:03 by ynina             #+#    #+#             */
/*   Updated: 2020/03/09 18:24:42 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				i;
	int				len;
	char			*str;
	long			nb;

	i = 0;
	nb = n;
	len = ft_numlength(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nb < 0)
	{
		str[i] = '-';
		nb *= -1;
		i++;
	}
	str[len] = '\0';
	while (len > i)
	{
		str[len - 1] = 48 + (nb % 10);
		nb = nb / 10;
		len--;
	}
	return (str);
}
