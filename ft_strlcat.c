/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:50:25 by hirebbec          #+#    #+#             */
/*   Updated: 2021/10/11 21:19:23 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	j = ft_strlen(dst);
	i = 0;
	dst_len = j;
	if (dst_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && i + dst_len < dstsize - 1 )
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (dst_len >= dstsize)
		dst_len = dstsize;
	return (ft_strlen(src) + dst_len);
}
