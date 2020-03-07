#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>

int main()
{
	
	char str[11]= "nina";
	char const *to_find = " 	nin ayan	";
	char const *compare = "ninaoan";
	size_t  a = 2;
	t_list *list = ft_lstnew("Yana", 5);
/*	printf("ft_strNstr_result: %s\n", ft_strnstr(str,to_find,2));
	printf("strNstr_result: %s\n", strnstr(str, to_find, 2));
	printf("ft_strSTR_result: %s\n", ft_strstr(str,to_find));
	printf("strSTR_result: %s\n", strstr(str, to_find));
	printf ("ft_strcat: %s\n", ft_strcat (str, to_find));
	printf("strcat: %s\n", strcat(str,to_find));
	printf("ft_strNcat: %s\n", ft_strncat (str,to_find,2));	
	printf("strNcat: %s\n", strncat (str,to_find,2));
	printf("ft_strlcat: %d\n", ft_strlcat(str,to_find,6));
	printf("strlcat: %d\n", strlcat(str,to_find,6));
	printf("ft_strchr: %s\n", ft_strchr(to_find, a));
	printf("strchr: %s\n", strchr(to_find, a));
	printf("ft_strrchr: %s\n", ft_strrchr(to_find, a));
	printf("strrchr: %s\n", strrchr(to_find, a));
	printf("ft_isalnum: %d\n",ft_isalnum(a));
	ft_putnbr_fd(456,1);
	printf ("%i\n",ft_strequ(to_find, compare));
	printf("%i\n",ft_strnequ(to_find,compare,a));
	printf("%s\n", ft_strsub(to_find,4,a));
	printf("%s", ft_strjoin(to_find,compare));
	printf("%s", ft_strtrim(to_find));*/
	printf("%s\n%zu", (*list).content,(*list).content_size); 
	return 0;
}	
