/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:32:24 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/10 16:45:33 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(unsigned char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
