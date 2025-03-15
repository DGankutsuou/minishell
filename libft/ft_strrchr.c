/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:04:42 by aabouriz          #+#    #+#             */
/*   Updated: 2024/10/26 15:34:55 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	*last;

	i = 0;
	if (!s)
		return (NULL);
	p = (char *)s;
	last = NULL;
	while (p[i])
	{
		if ((char)c == p[i])
			last = &p[i];
		i++;
	}
	if ((char)c == '\0')
		return (&p[i]);
	return (last);
}
