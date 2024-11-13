/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:46:47 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/05 18:52:15 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	to_upper_even(unsigned int index, char *c)
{
	if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main(){
	char str[] = "hello";
	ft_striteri(str, to_upper_even);
	printf("Modified string: %s\n", str);
	return (0);
}*/