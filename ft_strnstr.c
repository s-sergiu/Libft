/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:50:10 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/31 16:07:24 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[j + i] == needle[j] && (i + j) < len)
				j++;
			if (j == ft_strlen(needle))
				return ((char *)(haystack + i));
			else
				return (NULL);
			i = j;
			j = 0;
		}
		i++;
	}
	if (needle[0] == '\0')
		return ((char *)(haystack));
	else
		return (NULL);
}
