/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:02:46 by hirebbec          #+#    #+#             */
/*   Updated: 2021/10/26 21:08:52 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

long int	ignore(const char *str);

int	ft_atoi(const char *str)
{
	long int	m[3];

	m[0] = 0;
	m[1] = 0;
	m[2] = 1;
	m[0] = ignore(str);
	if (str[m[0]] == '-')
	{
		m[0]++;
		m[2] = 0;
	}
	else if (str[m[0]] == '+')
		m[0]++;
	while (str[m[0]] >= '0' && str[m[0]] <= '9' && str[m[0]])
	{
		m[1] = m[1] * 10 + (str[m[0]] - '0');
		if (m[1] < -2147483648 && m[2] == 0)
			return (0);
		else if (m[1] > 2147483647 && m[2] == 1)
			return (-1);
		m[0]++;
	}
	if (m[2] == 0)
		m[1] = -m[1];
	return ((int)m[1]);
}

long int	ignore(const char *str)
{
	long int	i;

	i = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	return (i);
}
