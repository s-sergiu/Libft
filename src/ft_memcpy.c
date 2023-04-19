
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	while (++i < (int)n)
		((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
