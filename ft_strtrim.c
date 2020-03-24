/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:42:49 by ynina             #+#    #+#             */
/*   Updated: 2020/03/03 16:25:34 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new_str;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen((char*)s);
	if (!s)
		return (NULL);
	while (*s && (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	while (*s && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		i++;
		len--;
	}
	if (len < 0)
		len = 0;
	if (!(new_str = (char*)malloc(sizeof(*new_str) * (len + 1))))
		return (NULL);
	while (s[i] && j < len && len > 0)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
