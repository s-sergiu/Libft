/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:52:47 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/07 00:08:17 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((s1[i] || s2[i]) && (i++ < n))
	{
		if ((unsigned char)s1[i - 1] < (unsigned char)s2[i - 1])
			return (-1);
		else if ((unsigned char)s1[i - 1] > (unsigned char)s2[i - 1])
			return (1);
	}
	return (0);
}
