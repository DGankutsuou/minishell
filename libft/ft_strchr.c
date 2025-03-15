/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:48:17 by aabouriz          #+#    #+#             */
/*   Updated: 2024/10/26 15:32:07 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	if (!s)
		return (NULL);
	p = (char *)s;
	while (p[i])
	{
		if ((char)c == p[i])
			return (&p[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&p[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	s[9] = "Nameless";

	printf ("%p\n", ft_strchr(s, 'e'));
	printf ("%p\n", ft_strchr(s, '\0'));
	return (0);
}
*/
