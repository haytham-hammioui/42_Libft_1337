/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:01:58 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/08 16:36:18 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *des, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	if (n == 0)
	{
		return (len);
	}
	i = 0;
	while (src[i] && i < n - 1)
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (len);
}
/*int main(void){
	char src[]="hello";
	char des[2];
	printf("%zu", strlcpy(NULL, NULL, 10));
	printf("%zu", ft_strlcpy(NULL, NULL, 10));
	printf("\n");
	printf("%s", des);
}*/