/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:35:09 by ynina             #+#    #+#             */
/*   Updated: 2020/03/03 14:50:10 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int result;
	int sign;
	unsigned long max;

	max = 9223372036854775807;
	result = 0;
	sign = 1;
	while (*str == '\t' || *str == '\v' || *str == '\n' || *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	if ((unsigned long)result > max &&  result != -2147483648)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (result * sign);
}
