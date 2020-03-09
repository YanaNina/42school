/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:34:03 by ynina             #+#    #+#             */
/*   Updated: 2020/03/05 15:27:16 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		str_length(int n)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = str_length(n);
	if (!(str = (char*)malloc(sizeof(char) * (str_length(n) + 1))))
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		n *= -1;
		i++;
	}
	str[len] = '\0';
	while (len > i)
	{
		str[len - 1] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}
