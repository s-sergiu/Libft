
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i-- >= 0)
		if (*(char *)(s + i + 1) == (char)c)
			return ((char *)(s + i + 1));
	return ((char *)('\0'));
}
