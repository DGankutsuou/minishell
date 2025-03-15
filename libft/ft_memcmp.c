/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:47:27 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/04 20:26:18 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sr1;
	unsigned char	*sr2;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	sr1 = (unsigned char *)s1;
	sr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (sr1[i] != sr2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (sr1[i] - sr2[i]);
}
/*
int	main(void)
{
	printf ("%d\n", ft_memcmp("aymbn", "aymaa", 4));
	return (0);
}
*/
