/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:01:07 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/27 18:03:35 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*r;

	if (n == 0)
		;
	i = 0;
	r = (unsigned char *)s;
	while (i < n)
	{
		r[i] = '\0';
		i++;
	}
	s = r;
}
