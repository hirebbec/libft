/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:15:12 by hirebbec          #+#    #+#             */
/*   Updated: 2021/10/24 18:11:05 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*m;

	m = (size_t *)malloc(size * count);
	if (!m)
		return (NULL);
	ft_bzero(m, size * count);
	return ((void *)m);
}
