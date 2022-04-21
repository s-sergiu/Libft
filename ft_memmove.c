/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:34:56 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/21 12:19:05 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (ft_strlen(src) > ft_strlen(dst))
		while (n-- > 0)
			*(char *)(dst + n) = *(char *)(src + n);
	else
		while (i++ < n)
			*(char *)(dst + i - 1) = *(char *)(src + i - 1);
	return (dst);
}
