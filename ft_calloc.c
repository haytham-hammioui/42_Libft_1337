/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:56:57 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/13 12:24:12 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	while (i < count * size)
	{
		p[i] = '\0';
		i++;
	}
	return ((void *)p);
}
/*int main(void)
{
	int *arr= (int *) ft_calloc(2,sizeof(int));
	if(arr == NULL){
		printf("mkaynach");
		return 1;
	}
	for(int i = 0;i<2;i++){
		printf("%d", arr[i]);
	}
	free (arr);
}*/