/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:50:10 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/07 14:29:58 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!needle[0])
		return ((char *)(haystack));
	i = 0;
	while ((len - (i++)) >= ft_strlen(needle) && haystack[0])
		if (!ft_strncmp(haystack++, needle, ft_strlen(needle)))
			return ((char *)haystack - 1);
	return (NULL);
}
