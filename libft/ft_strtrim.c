/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:37:20 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/08 12:13:49 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_setchar(char c, const char *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (1);
		else
			index++;
	}
	return (0);
}

static char	*trimmer(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	index;

	index = 0;
	while (s1[index] && is_setchar(s1[index], set))
		index++;
	if (!s1[index])
		return (ft_strdup (""));
	start = index;
	index = ft_strlen(s1) - 1;
	while (s1[index] && is_setchar(s1[index], set))
		index--;
	len = index - start + 1;
	return (ft_substr(s1, start, len));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trm_str;

	if (!s1 || !set)
		return (NULL);
	if (!set[0])
		return (ft_strdup (s1));
	trm_str = trimmer(s1, set);
	return (trm_str);
}
/*
int	main(void)
{
	printf ("\n%s\n\n", ft_strtrim (";,;,;ayman;,;,;", ";,;,"));
	printf ("\n%s\n\n", ft_substr (";,;,;ayman;,;,;", 5, 5));
	return (0);
}
*/
