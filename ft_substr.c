/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:12:08 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/11 17:53:32 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = malloc(len + 1);
	if (str == NULL)
		return (0);
	i = 0;
	while (i < len && start <= ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[len] = '\0';
	return ((char *)str);
}
