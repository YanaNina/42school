#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str != c)
			{
				str++;
				n--;
			}
		else
			return(str);
	}
	return (0);
}	
