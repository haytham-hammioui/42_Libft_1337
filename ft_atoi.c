/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:41:12 by hhammiou          #+#    #+#             */
/*   Updated: 2024/11/13 12:32:25 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					s;
	unsigned long long	r;

	i = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
		if (r > LLONG_MAX && s > 0)
			return (-1);
		if (r > LLONG_MAX && s < 0)
			return (0);
	}
	return ((int)(r * s));
}

/*int main()
{
	const char str[] = " 123456700000000005666000";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str));
}*/