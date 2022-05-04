/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/28 17:40:20 by ssergiu          ###   ########.fr       */
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
		return(0);
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

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		wc;
	int		len;
	int		index;
	int		i;

	wc = count_words(s, c);
	str = malloc((wc + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	index = 0;
	while (index < wc)
	{
		while (s[i] || s[i] == c)
		{
			if (s[i] != c)
			{
				len = 0;
				while (s[i] != c && s[i])
				{
					i++;
					len++;
				}
			str[index] = malloc((len + 1) * sizeof(char));
			str[index++] = ft_substr(s, i - len, len);
			}
			if (s[i] == '\0')
				i = i - 1;
			i++;
		}
	}
	str[index] = NULL;
	return (str);
}
