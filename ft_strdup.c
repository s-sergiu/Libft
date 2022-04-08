/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:40:10 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/08 14:58:00 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		len;
	int		i;

	len = ft_strlen(s1) + 1;
	i = 0;
	s = malloc(len * sizeof(char));
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	return (s);
}
