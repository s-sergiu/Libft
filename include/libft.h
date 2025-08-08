
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// Libft
int					ft_atoi(const char*);
void				ft_bzero(void*, size_t);
void				*ft_calloc(size_t, size_t);
int					ft_isalnum(int);
int					ft_isalpha(int);
int					ft_isascii(int);
int					ft_isdigit(int);
int					ft_isprint(int);
void				*ft_memchr(const void*, int, size_t);
int					ft_memcmp(const void*, const void*, size_t);
void				*ft_memcpy(void*, const void*, size_t);
void				*ft_memmove(void*, const void*, size_t);
void				*ft_memset(void*, int, size_t);
char				*ft_strchr(const char*, int);
char				*ft_strdup(const char*);
size_t				ft_strlcat(char*, const char*, size_t);
size_t				ft_strlcpy(char*, const char*, size_t);
size_t				ft_strlen(const char*);
int					ft_strncmp(const char*, const char*, size_t);
char				*ft_strnstr(const char*, const char*, size_t);
char				*ft_strrchr(const char*, int);
int					ft_tolower(int);
int					ft_toupper(int);
char				*ft_substr(char const*, unsigned int, size_t);
char				*ft_strjoin(char const*, char const*);
char				*ft_strtrim(char const*, char const*);
char				*ft_itoa(int);
char				*ft_strmapi(char const*, char (*f)(unsigned int, char));
void				ft_striteri(char*, void (*f)(unsigned int, char*));
void				ft_putchar_fd(char, int);
void				ft_putstr_fd(const char*, int);
void				ft_putendl_fd(char*, int);
void				ft_putnbr_fd(int, int);
char				**ft_split(char const*, char);
t_list				*ft_lstnew(void*);
void				ft_lstadd_front(t_list**, t_list*);
int					ft_lstsize(t_list*);
void				ft_lstadd_back(t_list**, t_list*);
t_list				*ft_lstlast(t_list*);
void				ft_lstdelone(t_list*, void (*del)(void*));
void				ft_lstclear(t_list**, void (*del)(void*));
void				ft_lstiter(t_list*, void (*f)(void *));
t_list				*ft_lstmap(t_list*, void *(*f)(void *),
						void (*del)(void *));
// get_next_line 
char		*get_next_line(int);
char		*ft_strjoin_gnl(char const*, char const*, int);
char		*read_line(int);
int			check_input(int);
int			has_newline(char*);
int			get_newline_pos(char*);
char		*get_line(char*);
char		*get_rest(char*);

// Printf
int		print_p(unsigned long);
int		print_string(char*);
int		print_int(int);
int		print_unsigned_int(unsigned int);
int		ft_printf(const char*, ...);
char	*ft_itoa_unsigned(unsigned int);
int		hex_len(unsigned int);
void	dectohex(unsigned int, char);
int		put_hex(unsigned int, char);
int		pointerhex(unsigned long, int);

#endif
