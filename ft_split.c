/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/19 17:48:07 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char **result;
	int i;
	int j;
	int x;
	int a;

	i = 0;
	j = 0;
	x = 0;
	a = 0;
	result = malloc(40 * sizeof(char)); 
	while (a < 40)
		result[a++] = malloc(15 * sizeof(char));
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != c)
				i++;
			j++;
		}
		result[j][x] = s[i];
		x++;
		i++;
	}
	result[j][0] = '\0';

	return(result);
}
	/*
	while (go over the string until it finds delimiter or reaches end)
		if detects delimiter 
			while counter position is not delimiter
				counter++	
		add to result[0] the chars until it detects delimiter
		increment result offset;
	
	exit and add null to the offset of result;
	*/

	/*
		s: The string to be split.
	    c: The delimiter character.
	*/

	/*  The array of new strings resulting from the split.
		NULL if the allocation fails.
	*/

	/*	Allocates (with malloc(3)) and returns an array
		of strings obtained by splitting ’s’ using the
		character ’c’ as a delimiter. The array must end
		with a NULL pointer.
	*/
