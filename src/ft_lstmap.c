
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_lst;
	t_list	*head;

	if (!lst)
		return (NULL);
	ptr = lst;
	new_lst = ft_lstnew(f(lst->content));
	head = new_lst;
	while (ptr->next)
	{
		ptr = ptr->next;
		new_lst->next = ft_lstnew(f(ptr->content));
		if (!new_lst->next)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		new_lst = new_lst->next;
	}
	return (head);
}
