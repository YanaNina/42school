/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:55:47 by ynina             #+#    #+#             */
/*   Updated: 2020/03/06 17:54:04 by ynina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <strings.h>
# include <ctype.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct	s_list	*next;
}					t_list;

char	*ft_strstr(char *str, char *to_find);
char	*ft_strnstr(char *str, char *to_find, unsigned int n);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, char *src, unsigned int n);
char	*ft_strdup(char *s);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
size_t 	ft_strlcat(char *dest, char *src, size_t n);
int		ft_strlen (char *s);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp (char *s1, char*s2, unsigned int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n); 
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putendl(char const *s);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void 	ft_putnbr_fd(int n, int fd);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
t_list 	*ft_lstnew(void const *content, size_t content_size);
void	 ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

#endif


