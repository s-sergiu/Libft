/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:15:25 by jtoty             #+#    #+#             */
/*   Updated: 2022/05/08 18:56:26 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		i;
	char *x = "      split       this for   me  !       ";

	char	**s = ft_split(x, ' ');
	i = 0;
	while(s[i] != NULL)
		printf("%s\n", s[i++]);
//	printf("%d\n", i);
//	printf("%s\n", s[i]);
	return (0);
}
