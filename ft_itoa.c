/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:43:19 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/13 16:22:57 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	nlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		temp;
	int		len;

	len = nlen(n) - 1;
	result = malloc(nlen(n) + 1 * sizeof(char));
	i = 0;
	temp = 0;
	if (result == NULL)
		return (NULL);
	while (n != 0)
	{
	temp = n % 10;
	result[i + len] = temp + '0';
	n = n / 10;
	i--;
	}
	result[len + 1] = '\0';
	return (result);
}
