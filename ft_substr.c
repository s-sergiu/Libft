/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:12:08 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/10 15:02:55 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		str = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i++] != '\0')
		str[i - 1] = s[start + i - 1];
	str[i] = 0;
	return (str);
}
