/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:01:07 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/06 15:43:52 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*r;

	if (n == 0)
		;
	i = 0;
	r = (unsigned char *)s;
	while (i < n)
	{
		r[i] = '\0';
		i++;
	}
	s = r;
}
