/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:47:55 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/08 17:57:37 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size;
	int		i;
	int		limit;

	size = ft_strlen(dst);
	limit = dstsize - (ft_strlen(dst)) - 1;
	i = 0;
	while (src[i] != '\0' && (limit) > i)
	{
		if (i < limit)
			dst[size + i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i + size] = '\0';
	if (dstsize > size)
		return (size + ft_strlen(src));
	else
		return (dstsize + ft_strlen(src));
}
