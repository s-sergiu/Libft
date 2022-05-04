/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:34:56 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/03 01:42:15 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (src < dst)
		while (n-- > 0)
			((char *)dst)[n] = ((char *)src)[n];
	else
		while (i++ < n)
			((char *)dst)[i - 1] = ((char *)src)[i - 1];
	return (dst);
}
