/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/26 16:13:22 by mvan-hou       #+#    #+#                */
/*   Updated: 2019/11/18 14:02:31 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 8

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isalnum(int c);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *s);
char			*ft_strncpy(char *dst, const char *src, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack,
				const char *needle, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memccpy(void *s, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_atoi(const char *str);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t t);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(long long n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
int				ft_count_wordsc(const char *s, char c);
int				ft_count_words(const char *s);
char			*ft_strrev(char *s);
int				ft_isspace(char c);
char			**ft_sortstring(char **array);
typedef struct	s_lst
{
	void			*content;
	size_t			content_size;
	struct s_lst	*next;
}				t_lst;
t_lst			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_lst **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_lst **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_lst **alst, t_lst *new);
void			ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));
t_lst			*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
int				get_next_line(const int fd, char **line);
char			*ft_strndup(const char *s1, size_t n);
char			*ft_strnjoin(char *s1, char *s2, int n1, int n2);

#endif
