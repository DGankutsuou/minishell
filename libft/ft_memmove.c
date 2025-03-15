/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:36:04 by aabouriz          #+#    #+#             */
/*   Updated: 2024/10/31 09:36:05 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	if (!dst || !src)
		return (dst);
	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	if (dst > src)
	{
		while (len)
		{
			len--;
			dst_tmp[len] = src_tmp[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int	main(void)
{
	char	s[10] = "abcdefghe\0";
	char	p[10] = "abcdefghe\0";
	char	*t;

	t = "anweffew";
	//printf ("%s\n", (char *)ft_memcpy(s + 2, s, 5));
	printf ("%s\n", (char *)ft_memmove(p + 2, p, 5));
	printf ("%c\n", t[3]);
	//printf ("%d\n", a[1]);
	return (0);
}
*/
