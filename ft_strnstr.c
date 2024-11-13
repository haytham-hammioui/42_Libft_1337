/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:57:45 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/13 12:20:16 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!hays && len == 0)
		return (NULL);
	if (need[0] == 0)
		return ((char *)hays);
	while (hays[i] && i < len)
	{
		while (hays[i + j] == need[j] && hays[i + j] && i + j < len)
		{
			j++;
			if (!need[j])
				return ((char *)hays + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "worldo";

    printf("%s\n", ft_strnstr(haystack, needle, 20));
	printf("%s\n", strnstr(haystack, needle, 20));
}*/
