/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:46:26 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/08 11:35:59 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	if (!lst)
		return (i);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*int main() {
	t_list *head = ft_lstnew("node1");
	head->next = ft_lstnew("node2");
	head->next->next = ft_lstnew("node3");
	
	printf("List size: %d\n", ft_lstsize(head));
	free(head->next->next);
	free(head->next);
	free(head);
	return 0;
}*/
