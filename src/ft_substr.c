
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t	s_length;

	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	if (start >= s_length)
		return (ft_calloc(1, 1));
	if (len > s_length - start)
	{
		str = (char *)malloc((s_length - start + 1) * sizeof(char));
		len = s_length - start;
	}
	else
		str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (i < (int)len && s[++i] != '\0')
		str[i] = s[start + i];
	str[i] = 0;
	return (str);
}
