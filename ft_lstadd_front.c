/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:14:17 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/23 13:52:46 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *n1;
	n1 = (t_list *)malloc(sizeof(t_list));
	n1 = *lst;
	if (n1->next == NULL)
		n1->next = new;
}
