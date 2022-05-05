/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:50:10 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/06 16:40:17 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < len && haystack[i] != '\0')
	{
		while (haystack[i] == needle[j])
		{
			while (haystack[j + i] == needle[j] && (i + j) < len
				&& haystack[j + i] != '\0' && needle[j] != '\0')
				j++;
			if (j == ft_strlen(needle))
				return ((char *)(haystack + i));
		}
		j = 0;
		i++;
	}
	if (needle[0] == '\0')
		return ((char *)(haystack));
	else
		return (NULL);
}