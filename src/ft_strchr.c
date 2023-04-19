
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i++ <= len)
		if (s[i - 1] == (char)c)
			return ((char *)(s + i - 1));
	return ((char *)0);
}
