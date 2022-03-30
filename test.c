/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:55:47 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/30 14:39:24 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int ft_strncmp(const char *s1, const char *s2, unsigned int n);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, unsigned int n);
void *ft_memchr(const void *s, int c, unsigned int n);
void *ft_memcpy(void *dst, const void *src, unsigned int n);
void *ft_memmove(void *dst, const void *src, unsigned int n);
int ft_memcmp(const void *s1, const void *s2, unsigned int n);
unsigned int ft_strlcpy(char *dst, char *src, unsigned int dstsize);
char *ft_strnstr(const char *haystack, const char *needle, unsigned int len);


int main(void)
{

	char haystack[] = "lorem ipsum dolor sit amet";
	char needle[] = "ipsumm";
	printf(" after:  %s", ft_strnstr(haystack, needle, 30));
	printf("\n");
//	printf(" memcmp mine %d", ft_strlcpy(x, s, 3));
	//printf("%s bzero mine", s);
}
