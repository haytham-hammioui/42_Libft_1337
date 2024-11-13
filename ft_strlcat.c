/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:30:38 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/10 12:02:51 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	j = 0;
	while (src[j] != '\0' && (dest_len + j) < size - 1)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (src_len + dest_len);
}
/*int main(void)
{
    char dest1[17] = "Hellooooooo";
    char src1[] = " World";
    printf("%zu\n", ft_strlcat(NULL, src1, 0));
	printf("%zu\n", strlcat(NULL, src1, 0));
}*/