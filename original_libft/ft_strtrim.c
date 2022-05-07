/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:09:18 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/07 15:05:01 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	contains(char const *set, char s)
{
	int	i;

	i = 0;
	while (set[i])
		if (s == set[i++])
			return (1);
	return (0);
}

static char	*trim_func(int i, int j, char const *s1, char *trim)
{
	int		x;

	x = 0;
	while (i <= j)
		trim[x++] = s1[i++];
	trim[x] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	j;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (contains(set, s1[i]) == 1)
		i++;
	if (i == ft_strlen(s1))
	{
		trim = (char *)malloc(1 * sizeof(char));
		trim[0] = '\0';
		return (trim);
	}
	while (contains(set, s1[j]) == 1)
		j--;
	trim = (char *)malloc((j - i + 2) * sizeof(char));
	if (!trim)
		return (NULL);
	return (trim_func(i, j, s1, trim));
}
