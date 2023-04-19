
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (src < dst)
		while (n-- > 0)
			*(char *)(dst + n) = *(char *)(src + n);
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
