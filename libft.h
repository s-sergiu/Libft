/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:05:23 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/29 19:39:46 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memset(void *b, int c, unsigned int len);
void				ft_bzero(void *s, unsigned int n);
void				*ft_memchr(const void *s, int c,unsigned int n);
void				*ft_memcpy(void *dst, const void *src, unsigned int n);
void				*ft_memmove(void *dst, const void *src, unsigned int n);
int					ft_memcmp(const void *s1, const void *s2, unsigned int n);
unsigned int		ft_strlcpy(char *dst, char *src, unsigned int dstsize);
unsigned int		ft_strlcpy(char *dst, char *src, unsigned int dstsize);
char				*ft_strnstr(const char *haystack, const char *needle, unsigned int len);

#endif
