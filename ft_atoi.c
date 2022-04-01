/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:08:54 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/01 17:46:18 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		if (str[i] == 9 || str[i] == 32 || str[i] == 10 || str[i] == 11
			|| str[i] == 12 || str[i] == 13)
			i++;
		else if (str[i] >= 48 || str[i] <= 57)
		{
			x = (int)(str[i]) + x;
			i++;
		}
		else
			x = x * 10;
		i++;
	}
	x = x / 10;
	return (x);
}
