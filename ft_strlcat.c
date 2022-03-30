/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:47:55 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/30 19:59:58 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	unsigned int	size;
	int				i;

	size = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0')
		dst[size - ft_strlen(dst) - 1] = src[i];
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
