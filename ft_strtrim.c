/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:09:18 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/19 16:33:00 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	contains(char const *set, char s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		j;
	int		i;
	int		x;

	if (!s1)
		return (NULL);
	i = 0;
	x = 0;
	j = ft_strlen(s1) - 1;
	while (contains(set, s1[i]) == 1 || s1[i] == ' ')
		i++;
	while (contains(set, s1[j]) == 1 || s1[j] == ' ')
		j--;
	if (i == (int)ft_strlen(s1))
		trim = (char *)malloc(1 * sizeof(char));
	else
		trim = (char *)malloc((j - i + 2) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	while (i <= j)
		trim[x++] = s1[i++];
	trim[x] = '\0';
	return (trim);
}

int	contains(char const *set, char s)
{
	int	i;

	i = 0;
	while (set[i])
		if (s == set[i++])
			return (1);
	return (0);
}
