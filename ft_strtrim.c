/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:09:18 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/13 15:35:08 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	trim = malloc(ft_strlen(s1) - ft_strlen(set) * sizeof(char));
	while (set[i] != '\0' || i < ft_strlen(s1) / 2)
		if (s[i] == set[i])
			s[i] = '\0';

	return (trim);
}
