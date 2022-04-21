/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/21 18:41:54 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (s[i] != '\0' || s[i] == c)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
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
	str = malloc((wc + 1) * sizeof(char));
	i = 0;
	index = 0;
	while (i < wc)
	{
		while (s[i] != '\0' || s[i] == c)
		{
			if (s[i] != c)
			{
				while (s[i] != c && s[i] != '\0')
				{
					i++;
					len++;
				}
			str[index] = malloc(len * sizeof(char));
			str[index] = ft_substr(s, i - len, len);
			index++;
			}
			i++;
		}
	}
	str[index] = NULL;
	return (str);
}
