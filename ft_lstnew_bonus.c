/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:12:43 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/08 10:05:37 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}
/*int main() {
    t_list *node = ft_lstnew("hello");
    if (node == NULL) {
        printf("error\n");
        return 1;
    }
    printf("%s\n", (char *)node->content);
    printf("%p\n", (void *)node->next);
    free(node);
    return 0;
}*/