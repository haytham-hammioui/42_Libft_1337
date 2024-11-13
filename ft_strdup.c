/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:57:40 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/12 10:59:57 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	ptr = malloc(i + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < i)
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*int main(void) {
    const char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);
    if (duplicate == NULL) {
        printf("mkaynach");
        return 1;
    }
    printf("Duplicate: %s\n", duplicate);
    free(duplicate);
}*/