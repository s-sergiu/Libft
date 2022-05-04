/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:29:59 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/27 01:32:43 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *curr;

	curr = lst;
	while (curr)
	{
		f(curr->content);
		curr = curr->next;
	}
}
