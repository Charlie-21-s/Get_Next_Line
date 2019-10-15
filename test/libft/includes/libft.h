/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:06:43 by talexia           #+#    #+#             */
/*   Updated: 2019/09/23 12:38:07 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstaddback(t_list *alst, t_list *new);
int					ft_sqrt(int	nb);
char				*ft_reverse_str(char *str);
void				ft_putchar(char a);
void				ft_putchar_fd(char a, int fd);
void				ft_putstr(char *str);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
int					ft_sqrt(int nb);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strdup(const char *src);
size_t				ft_strlen(const char *str);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *a));
void				ft_striteri(char *s, void (*f)(unsigned int, char *a));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_bzero(void *s, size_t n);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				*ft_memset(void *s, int a, size_t len);
void				*ft_memcpy(void	*s1, const void *s2, size_t num);
void				*ft_memccpy(void *s1, const void *s2, int i, size_t num);
void				*ft_memmove(void *s1, const void *s2, size_t num);
void				*ft_memchr(const void *str, int c, size_t num);
int					ft_memcmp(const void *s1, const void *s2, size_t num);
char				*ft_strcpy(char *str1, const char *str2);
char				*ft_strncpy(char *str1, const char *str2, size_t n);
char				*ft_strcat(char *str1, const char *str2);
char				*ft_strncat(char *str1, const char *str2, size_t n);
size_t				ft_strlcat(char *str1, const char *str2, size_t n);
int					ft_tolower(int a);
int					ft_toupper(int a);
int					ft_isprint(int a);
int					ft_isascii(int a);
int					ft_isalnum(int a);
int					ft_isdigit(int a);
int					ft_isalpha(int a);
char				*ft_strchr(const char *str, int a);
char				*ft_strrchr(const char *str, int a);
char				*ft_strstr(const char *str, const char *s);
char				*ft_strnstr(const char *str, const char *s, size_t n);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
#endif
