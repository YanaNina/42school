#include "libft.h"

char *ft_strnew(size_t size)
{
	char *memo;
	memo = (char*)malloc((*memo) * (size + 1));
	if (memo == '\0')
		return (0);
	ft_bzero(memo,(size+1));
	return(memo);
}
	
