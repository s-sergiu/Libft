/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/07 20:26:20 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	int_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i++ <= ft_strlen(s))
		if (s[i - 1] == (char)c)
			return (i);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		index;
	int		lc;

	if (!s)
		return (NULL);
	str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	index = 0;
	lc = 0;
	i = 0;
	while (ft_strlen(s))
	{
		while (s[i] != c)
			i++;
		s = s + i;
		lc = count_word(s, c);
		str[index] = (char *)malloc((lc + 1) * sizeof(char));
		str[index++] = ft_substr(s, 0, lc);
		i = i + lc;
	}
	str[index] = NULL;
	return (str);
}
