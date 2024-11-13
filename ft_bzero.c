/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:50:01 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/13 12:29:46 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*ptr, size_t len)
{
	ft_memset(ptr, 0, len);
}
/*int main(void){
	char arr[10];
	ft_bzero(arr, sizeof(arr));
	for(int i=0;i<sizeof(arr);i++){
		printf("%d", arr[i]);
	}
	return 0;
}*/