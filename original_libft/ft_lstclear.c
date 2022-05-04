/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:06:13 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/27 01:27:45 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*prev;

	current = *lst;
	prev = *lst;
	while (current)
	{
		prev = current;
		del(prev->content);
		current = current->next;
		free(prev);
	}
	*lst = NULL;
}
