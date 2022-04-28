/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:33:01 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/27 02:01:13 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *list;
	t_list *curr;

	curr = lst;
	while (curr)
	{
		f(curr->content);
		list->content = curr->content;
		del(curr->content);
		curr = curr->next;
	}
	return(list);
}
