/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/05/08 19:04:37 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*trim_string(char *s, char c)
{
	while (s[0] == c)
		s++;
	return (s);
}

static int	get_words(char const *s, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' || s[i] == c)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
			{
				wc++;
				return (wc);
			}
		wc++;
		}
		i++;
	}
	return (wc);
}

static int	get_letters(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		index;
	int		lc;

	if (!s)
		return (NULL);
	str = (char **)malloc((get_words((char *)s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	index = 0;
	if (s[0])
		s = trim_string((char *)s, c);
	while (ft_strlen(s))
	{
		lc = get_letters((char *)s, c);
		str[index] = (char *)malloc((lc + 1) * sizeof(char));
		if (str[index] == NULL)
			return (NULL);
		ft_memcpy(str[index++], s, lc);
		s = s + lc;
		s = trim_string((char *)s, c);
	}
	str[index] = NULL;
	return (str);
}
