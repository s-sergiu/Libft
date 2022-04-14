/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:09:18 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/14 18:53:11 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	contains(char const *set, char s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		j;
	int		i;

	trim = malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (trim == NULL)
		return (0);
	i = 0;
	j = 0;
	while (contains(set, s1[i]) == 1)
		i++;
	while (s1[i] != '\0')
	{
		trim[j] = s1[i];
		i++;
		j++;
	}
	trim[j] = '\0';
	i = (int)ft_strlen(trim) - 1;
	if (i < 0)
		return (trim);
	while (contains(set, trim[i]) == 1)
		i--;
	trim[i + 1] = '\0';
	return (trim);
}

int	contains(char const *set, char s)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
		{
			return (1);
			i++;
		}
		i++;
	}
	return (0);
}
