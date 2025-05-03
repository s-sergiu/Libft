#include "libft.h"

void	parse_words(size_t n, size_t* dst, const size_t* src)
{
	const size_t*	src_size_t;
	size_t*			dst_size_t;
	int				word;
	int				i;

	i = 0;
	word = n / sizeof(size_t);	
	src_size_t = src;
	dst_size_t = dst;
	while (i < word)
	{
		dst_size_t[i] = src_size_t[i];
		i++;
	}
}

void	parse_rest(size_t n, char* dst, const char* src)
{
	char*		dst_rest;
	const char*	src_rest;
	int			rest;
	int			i;

	i = 0;
	rest = n % sizeof(size_t);
	src_rest = src;
	dst_rest = dst;
	while (i < rest)
	{
		dst_rest[i] = src_rest[i];
		i++;
	}
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	parse_words(n, dst, src);
	parse_rest(n, dst, src);
	return (dst);
}
