/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/20 14:24:40 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char **result;
	printf("dsads %c", c);
	printf("sdasdas %s", s);
	result = malloc(40 * sizeof(char)); 

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
