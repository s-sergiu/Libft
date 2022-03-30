/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:23:30 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/27 20:42:43 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)s;
	while (i < n)
	{
		if (r[i] == (unsigned char)(c))
			return ((char *)(r + i));
		i++;
	}
	return ((unsigned char *)('\0'));
}
