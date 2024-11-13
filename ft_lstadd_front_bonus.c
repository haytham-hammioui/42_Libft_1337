/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:37:54 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/10 11:50:33 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			new->next = *lst;
			*lst = new;
		}
	}
}
/*int main() {
	t_list *head = ft_lstnew("world");
	t_list *new_node = ft_lstnew("hello");

	ft_lstadd_front(&head, new_node);
	printf("%s -> %s\n", (char *)head->content, (char *)head->next->content);
	free(head->next);
	free(head);
}*/
