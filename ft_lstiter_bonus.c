/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:45:13 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/08 12:54:52 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void print_content(void *content)
{
    printf("Content: %s\n", (char *)content);
}*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*int main()
{
    t_list *node1 = ft_lstnew(strdup("Hello"));
    t_list *node2 = ft_lstnew(strdup("World"));
    t_list *node3 = ft_lstnew(strdup("Test"));

    node1->next = node2;
    node2->next = node3;

    ft_lstiter(node1, print_content);

    free(node1->content);
    free(node2->content);
    free(node3->content);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
