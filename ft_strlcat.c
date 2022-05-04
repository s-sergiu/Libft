/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:47:55 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/03 01:57:07 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	int		i;

	i = 0;
	dstlen = ft_strlen(dst);
	while (i < (int)(((dstsize - 1) - dstlen)) && src[i])
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	if (dstsize < dstlen)
		return (dstsize + ft_strlen(src));
	dst[i + dstlen] = '\0';
	return (dstlen + ft_strlen(src));
}
