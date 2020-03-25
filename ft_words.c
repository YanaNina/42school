
#include "libft.h"

int	ft_words(char const *s, char c)
{
	int words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			while (*s != c && *s != '\0')
				s++;
			words++;
		}
		if (*s == '\0')
			break;
		s++;
	}
	return (words);
}
