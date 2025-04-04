#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

#include <stdio.h>
#include <fcntl.h>

/* === ft_printf === */

int		ft_printf(const char *format, ...);
int		ft_arg_print(char const format_c, va_list arg);
int		ft_print_char(va_list arg);
int		ft_print_string(va_list arg);
int		ft_print_pointer(void *ptr);
int		ft_print_number(va_list arg, char format);
int		ft_print_hex(unsigned int n, const char format_spec);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_puthex(unsigned int n, const char format);
char	*ft_itoa_base_unsigned(unsigned long n, int base);
size_t	ft_length_unsigned(unsigned long n, int base);

/* === get_next_line === */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*read_line(int fd, char *buf_cont);
char	*new_line(char *buf_cont);
void	delete_newline_from_buffer(char **buf);
int		there_is_newline(char *buf_cont);
char	*string_join(char *str1, char *str2);
size_t	ft_strlen_c(const char *str, char c);

/* === libft base === */

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *d, const void *s, size_t n);
size_t	ft_strlcpy(char *d, const char *s, size_t d_size);
size_t	ft_strlcat(char *d, const char *s, size_t d_size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *src, const char *sub, size_t n);
int		ft_atoi(const char *s);
void	*ft_calloc(size_t n, size_t size);
char	*ft_strdup(const char *s_s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *s2);
char	**ft_split(char const *str, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* === bonus list === */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
