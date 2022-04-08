/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:23:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/06 15:46:14 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)s;
	while (i < n)
	{
		if (r[i] == (unsigned char)(c))
			return ((char *)(r + i));
		i++;
	}
	return ((unsigned char *)('\0'));
}
