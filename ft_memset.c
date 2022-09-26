/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:56:20 by hirebbec          #+#    #+#             */
/*   Updated: 2021/10/05 16:05:44 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	d;
	char			*str;

	str = b;
	d = (unsigned char)c;
	str = (char *) b;
	while (len--)
	{
		*str++ = d;
	}
	return (b);
}
