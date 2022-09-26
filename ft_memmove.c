/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:42:31 by hirebbec          #+#    #+#             */
/*   Updated: 2021/10/24 18:19:22 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	if (dst == src)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
		return (dst);
	}
	while (i < (int)len)
	{			
		d[i] = s[i];
		i++;
	}
	return (dst);
}
