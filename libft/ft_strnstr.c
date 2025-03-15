/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:04:47 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/09 18:43:00 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bc;
	size_t	l_len;

	if (little && !*little)
		return ((char *)big);
	if (!big || !little || !len)
		return (NULL);
	l_len = ft_strlen (little);
	bc = 0;
	while (big[bc] && bc + l_len <= len)
	{
		if (!ft_strncmp (&big[bc], little, l_len))
			return (&((char *)big)[bc]);
		bc++;
	}
	return (NULL);
}

// int main(void)
// {
// 	printf("%s\n", ft_strnstr("hellokkkk", "ok", 6));
// 	return (0);
// }
