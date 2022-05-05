/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/05 02:48:54 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	int_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i++ <= ft_strlen(s))
		if (s[i - 1] == (char)c)
			return (i);
	return (0);
}

int	count_words(char const *s, char c)
{
	int	wc;
	int	offset;

	wc = 0;
	while (ft_strlen(s))
	{
		s = ft_strtrim(s, &c);
		offset = int_strchr(s, c);
		if (!offset)
			offset = ft_strlen(s) + 1;
		wc++;
		s = s + offset;
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	int		offset;
	char	**str;
	int		index;

	if (!s)
		return (NULL);
	str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	index = 0;
	while (ft_strlen(s))
	{
		s = ft_strtrim(s, &c);
		offset = int_strchr(s, c);
		if (!offset)
			offset = ft_strlen(s) + 1;
		str[index] = malloc((offset) * sizeof(char));
		if (str[index] == NULL)
			str[index++] = NULL;
		else
			str[index++] = ft_substr(s, 0, offset - 1);
		s = s + offset;
	}
	str[index] = NULL;
	return (str);
}
