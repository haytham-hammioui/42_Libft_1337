/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:37:53 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/08 15:15:06 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void *str_upper(void *content)
{
    char *str = (char *)content;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return content;
}*/
/*void del(void *content)
{
    free(content);
}*/
/*void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*head;
	void	*str;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		str = f(lst->content);
		node = ft_lstnew(str);
		if (!node)
		{
			del(str);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
/*int main()
{
    t_list *node1 = ft_lstnew(strdup("hello"));
    node1->next = ft_lstnew(strdup("world"));
    node1->next->next = ft_lstnew(strdup("test"));

    print_list(node1);
    t_list *new_list = ft_lstmap(node1, str_upper, del);
    print_list(new_list);
	ft_lstclear(&new_list, del);
    return 0;
}*/
