/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:54:15 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/08 12:21:30 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void del(void *content) {
    free(content);
}*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
/*int main() {
    t_list *node = ft_lstnew(malloc(5));
	
    if (!node) {
        printf("failed!\n");
        return 1;
    }
    ft_lstdelone(node, del);
    printf("Node deleted successfully!\n");
    return 0;
}*/
