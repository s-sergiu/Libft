/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:43:19 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/17 15:45:36 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	nlen(int n)
{
	int	i;

	i = 1;
	if (n < 10)
		return (1);
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*reverse(char *str, int len)
{
	int		i;
	char	temp;

	i = 0;
	while (i < len)
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;
	char	temp;
	int		len;
	int		i;

	len = nlen(n);
	temp = 0;
	i = 0;
	if (n > 0)
		result = (char *)malloc(len + 1 * sizeof(char));
	else
	{
		n = n * -1;
		len = nlen(n) + 1;
		result = (char *)malloc(len + 2 * sizeof(char));
		result[0] = '-';
		i++;
	}
	while (i < len)
	{
		temp = (n % 10) + '0';
		n = n / 10;
		result[i] = temp;
		i++;
	}
	result[len] = '\0';
	result = reverse(result, len - 1);
	return (result);
}
