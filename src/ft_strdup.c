
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = -1;
	s = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (++i < (int)(ft_strlen(s1) + 1))
		s[i] = s1[i];
	return (s);
}
