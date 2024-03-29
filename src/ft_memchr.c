
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ < n)
		if (*((unsigned char *)s + i - 1) == (unsigned char)(c))
			return ((char *)(s + i - 1));
	return (NULL);
}
