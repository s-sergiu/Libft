/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:47:55 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/03 17:56:03 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dstlen)
		return (ft_strlen(src) + dstsize);
	while (i < (int)(dstsize - 1 - dstlen) && src[i])
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = '\0';
	return (dstlen + ft_strlen(src));
}
