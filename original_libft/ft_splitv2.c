/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitv2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/28 15:32:48 by ssergiu          ###   ########.fr       */
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
	int		size;

	size = ft_strlen(s);
	wc = count_words(s, c);
	str = malloc((wc + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	index = 0;
	if (!s)
	{
		str[index] = NULL;
		return (str);
	}
	while (i < (int)ft_strlen(s))
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i] != c && len < size)
			{
				len++;
				i++;
			}
		str[index] = malloc((len + 1) * sizeof(char));
		ft_strlcpy(str[index++], s + (i - len), len + 1);
		}
		i++;
	}
	str[index] = NULL;
	return (str);
}
