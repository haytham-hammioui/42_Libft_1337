/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:39:33 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/13 12:16:37 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	wcount;

	i = 0;
	wcount = 0;
	while (s && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			wcount++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (wcount);
}

static int	word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i + len] && s[i + len] != c)
		len++;
	return (len);
}

static void	ft_free(char **new, int j)
{
	while (j >= 0)
	{
		free(new[j]);
		j--;
	}
	free(new);
}

static char	**ft_loop(char **ptr, const char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		ptr[j] = ft_substr(s, i, word_len(s, c, i));
		if (!ptr[j])
		{
			ft_free(ptr, j);
			return (NULL);
		}
		i += word_len(s, c, i);
		j++;
	}
	ptr[j] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s)
		return (NULL);
	new = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!new)
		return (NULL);
	return (ft_loop(new, s, c));
}
/*int main(){
char **arr = ft_split(NULL, ',');
if (arr == NULL) {
    printf("The result is NULL\n");
    return 0;
}
for (int k = 0; arr[k] != NULL; k++) {
    printf("%s\n", arr[k]);
}
for (int k = 0; arr[k] != NULL; k++) {
    free(arr[k]);
}
free(arr);
}*/