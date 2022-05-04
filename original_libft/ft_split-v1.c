/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split-v1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/27 15:15:53 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(char const *s, char c)
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

int	count_letters(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**split(char **str, char const *s, char c, int wc)
{
	int	i;
	int	index;
	int	len;

	index = 0;
	i = 0;
	while (index < wc)
	{
		while (s[i] != '\0' || s[i] == c)
		{
			if (s[i] != c)
			{
			len = count_letters(s, c, i);
			i = i + len;
			str[index] = malloc((len + 1) * sizeof(*str[index]));
			str[index++] = ft_substr(s, i - len, len);
			}
			if (s[i] == '\0')
				i = i - 1;
			i++;
		}
	}
	str[index] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		wc;
	int		index;
	int		i;

	wc = count_words(s, c);
	str = malloc((wc + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	i = 0;
	index = 0;
	if (!s || !c)
	{
		str[index] = NULL;
		return (str);
	}
	str = split(str, s, c, wc);
	return (str);
}
