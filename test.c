/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:02:17 by jtoty             #+#    #+#             */
/*   Updated: 2022/04/08 18:17:51 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char str[15] =  "rrrrrrrrrrrrrrr";
	char str1[15] = "rrrrrrrrrrrrrrr";
	printf("mine :");
	printf("%zu %s \n", ft_strlcat(str,"lorem ipsum dolor sit amet",5), str);
	printf("original :");
	printf("%lu %s \n", strlcat(str1,"lorem ipsum dolor sit amet",5), str1);
	return (0);
}
