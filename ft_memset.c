/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:42:27 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/12 11:15:40 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*a;

	a = ptr;
	while (len--)
	{
		*a++ = (unsigned char) c;
	}
	return (ptr);
}
/*int main(void){
    int i = 10;
    printf("%d\n", i);
    ft_memset(&i, 0, 4);
	ft_memset(&i, 5, 2);
	ft_memset(&i, 57, 1);
    printf("%d\n", i);
    return 0;
}*/