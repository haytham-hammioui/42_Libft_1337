/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:41:25 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/10 12:05:40 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void del(void *content)
{
    free(content);
}*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	if (lst && *lst && del)
	{
		while (*lst)
		{
			l = *lst;
			*lst = l->next;
			ft_lstdelone(l, del);
		}
	}
}
/*int main()
{
    t_list *list = ft_lstnew(strdup("Hello"));
    list->next = ft_lstnew(strdup("World"));
    list->next->next = ft_lstnew(strdup("Test"));

    if (list)
		printf("Content: %s\n", (char *)list->content);
    if (list->next)
		printf("Content: %s\n", (char *)list->next->content);
    if (list->next->next)
		printf("Content: %s\n", (char *)list->next->next->content);
    ft_lstclear(&list, del);
    if (!list)
    {
        printf("List is empty.\n");
    }
    return 0;
}*/
