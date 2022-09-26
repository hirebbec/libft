/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:19:02 by hirebbec          #+#    #+#             */
/*   Updated: 2021/10/24 18:51:04 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

int	ft_len(int	c)
{
	int	i;

	i = 0;
	if (c <= 0)
	{
		i++;
		c = c * (-1);
	}
	while (c > 0)
	{
		i++;
		c = c / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	str[i--] = '\0';
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		i--;
		n = n / 10;
	}
	return ((char *)str);
}
