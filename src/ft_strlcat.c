
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dstlen)
		return (ft_strlen(src) + dstsize);
	while (src[i] && i < (dstsize - 1 - dstlen))
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = 0;
	return (dstlen + ft_strlen(src));
}
