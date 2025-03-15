/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:47:22 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/06 10:40:13 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	trg;

	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	i = 0;
	trg = (unsigned char)c;
	while (i < n)
	{
		if (trg == ptr[i])
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
