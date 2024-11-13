/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:12:58 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/12 10:59:22 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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
		return (dest);
	if (dest > src)
	{
		while (i < n)
		{
			dst[n - 1 - i] = srcs[n - 1 - i];
			i++;
		}
	}
	while (i < n)
	{
		dst[i] = srcs[i];
		i++;
	}
	return (dst);
}
/*int main(void){
	char src[10] = "hello";
	char dest[10];
	ft_memmove(dest, src,sizeof(src));
	for(int i=0;i<sizeof(src);i++){
		printf("%c",dest[i]);
	}
}*/