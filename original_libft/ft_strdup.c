/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:40:10 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/19 18:01:02 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while ((unsigned int)i++ < (ft_strlen(s1) + 1))
		s[i - 1] = s1[i - 1];
	return (s);
}
