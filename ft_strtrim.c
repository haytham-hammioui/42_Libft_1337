/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:50:11 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/06 17:23:54 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	new = malloc(end - start + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		new[i++] = s1[start++];
	}
	new[i] = '\0';
	return (new);
}
/*int main(){
char *trimmed = ft_strtrim("abccbbaaHello, World!bccaaab", "abc");
printf("%s\n", trimmed);
free(trimmed);
}*/