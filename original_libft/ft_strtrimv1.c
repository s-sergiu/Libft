/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:09:18 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/14 18:52:15 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	contains(char const *set, char s);

int countf(char const *set, char const *s)
{
  int i;
  i = 0;
  while (contains(set, s[i]) == 1)
    i++;
  return (i);
}

int countb(char const *set, char const *s, int size)
{
  while (contains(set, s[size]) == 1)
      size--;
  return size;
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *trim;
    int        j;
    int        i;
    int       size;
    int       x;
    
    size = ft_strlen(s1);
    i=countf(set,s1);
    j=countb(set,s1,size-1);
	if (j < 0)
		return("");
    trim = malloc(j - i + 2 * sizeof(char));
    if (trim == 0)
      return (0);

    x = 0;
    while (i < j + 1)
    {
        trim[x] = s1[i];
        i++;
        x++;
    }
    trim[x] = '\0';


    if (i < 0)
        return (trim);
    while (contains(set, trim[j]) == 1)
        j--;
    trim[j + 1] = '\0';
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
