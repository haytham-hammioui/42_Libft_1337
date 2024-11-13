/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:55:25 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/12 10:59:13 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*srcs;

	i = 0;
	dst = (char *)dest;
	srcs = (char *)src;
	if (!dst && !srcs)
		return (0);
	if (dest == src)
		return (dst);
	while (i < n)
	{
		dst[i] = srcs[i];
		i++;
	}
	return (dest);
}
/*int main(void){
	char src[14]="le é rhaytham";
	char dest[14]="hello world";
	ft_memcpy(dest, src, 6);
	for(int i=0;i<sizeof(src);i++){
		printf("%c",dest[i]);
	}
}*/