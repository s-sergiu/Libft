
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (++i < n + 1)
		if (*((unsigned char *)s1 + i - 1) != *((unsigned char *)s2 + i - 1))
			return (*((unsigned char *)s1 + i - 1)
				- *((unsigned char *)s2 + i - 1));
	return (0);
}
