/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:50:10 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/30 17:35:26 by ssergiu          ###   ########.fr       */
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
			while (needle[j] != '\0')
			{
				if (haystack[j + i] == needle[j])
					j++;
			}
			if (j == ft_strlen(needle))
				return ((char *)(haystack + i));
			else
				return (0);
			i = j;
			j = 0;
		}
		else
			i++;
	}
	return ((char *)(haystack));
}
