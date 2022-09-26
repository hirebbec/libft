/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:53:45 by hirebbec          #+#    #+#             */
/*   Updated: 2021/10/24 18:11:38 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst == src && n == 0)
		return (dst);
	while (n--)
	{
		d[n] = s[n];
	}
	return ((void *)d);
}
