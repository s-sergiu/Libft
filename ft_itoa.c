/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:43:19 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/18 19:20:31 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	nlen(int n)
{
	int	i;
	int sign;

	i = 0;
	sign = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		sign = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + sign);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	char	temp;
	int		null;

	len = nlen(n);
	null = len;
	
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	else if (n == -2147483648)
	{
		n = n + 1;
		n = n * -1;
		while(n > 0)
		{
			temp = (char )(n % 10) + '0';
			result[len - 1] = temp;
			n = n / 10;
			len--;
		}
		result[0] = '-';
		result[null - 1] = '8';
	}
	else if (n < 0)
	{
		n = n * -1;
		while(n > 0)
		{
			temp = (char )(n % 10) + '0';
			result[len - 1] = temp;
			n = n / 10;
			len--;
		}
		result[0] = '-';
	}
	else
	{
		while(n > 0)
		{
			temp = (char )(n % 10) + '0';
			result[len - 1] = temp;
			n = n / 10;
			len--;
		}
	}
	result[null] = '\0';
	return (result);
}

