
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!needle[0])
		return ((char *)(haystack));
	i = 0;
	if (haystack[0])
		while ((len - (i++)) >= ft_strlen(needle))
			if (!ft_strncmp(haystack++, needle, ft_strlen(needle)))
				return ((char *)haystack - 1);
	return (NULL);
}
