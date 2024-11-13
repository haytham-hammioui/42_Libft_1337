/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:54:00 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/06 12:01:13 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	add_index(unsigned int index, char c)
{
	return (c + index);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		slen;
	char	*new;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	new = malloc(slen + 1);
	if (!new)
		return (NULL);
	while (slen > i)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*int main(){
	char *s="abc";
	char *new = ft_strmapi(s, add_index);
	printf("%s\n", new);
	free(new);
}*/