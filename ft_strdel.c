#include "libft.h"

void ft_strdel(char **as)
{
	while (*as)
	{
		free(*as);
		as++;
	}
	*as = '\0';
}	


