/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:34:03 by ynina             #+#    #+#             */
/*   Updated: 2020/03/03 21:06:28 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int 	i;
	int		len;
	char 	sign;
	char	*str;

	i = 0;
	sign = '-';
	len = 0;
	
	if (n < 0)
		len++;
	while (n > 9)
	{
		n = n / 10
		len++;
	}
	len++;
	str = (char*)malloc(sizeof(char)*(len + 1));
	if (n < 0)
	{
		str[i] = '-';
		i = 1;
	}
	while (len > 0)
		str[i] = 
}	
