/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:32:07 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/10 11:47:40 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*f;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			f = ft_lstlast(*lst);
			f->next = new;
		}
	}
}
/*int main() {
	t_list *head = ft_lstnew("hello");
	t_list *node2 = ft_lstnew("world");

	ft_lstadd_back(&head, node2);
	printf("%s -> %s\n", (char *)head->content, (char *)head->next->content);
	free(node2);
	free(head);
	return 0;
}*/