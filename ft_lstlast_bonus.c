/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:19:25 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/08 11:44:29 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*int main() {
    t_list *head = ft_lstnew("first");
    head->next = ft_lstnew("second");

    t_list *last = ft_lstlast(head);
    printf("Last element: %s\n", (char *)last->content);
    free(head->next);
    free(head);
    return 0;
}*/
