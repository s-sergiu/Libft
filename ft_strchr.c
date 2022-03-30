/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:38:48 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/25 21:51:12 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (*(s + size) != '\0')
		size++;
	while (i <= size)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return ((char *)('\0'));
}
