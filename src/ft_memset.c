
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = -1;
	while (++i < (int)len)
		((char *)b)[i] = c;
	return ((char *)b);
}
