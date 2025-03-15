/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:34:51 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/05 09:34:06 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	tolower_toupper(unsigned int index, char c)
{
	if (ft_isalpha (c))
	{
		if(index % 2 == 0)
		{
			if (c <= 'z' && c >= 'a')
				return (c - 32);
		}
		if (c <= 'Z' && c >= 'A')
			return (c + 32);
	}
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dup;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	dup = (char *)ft_strdup(s);
	if (!dup)
		return (NULL);
	index = 0;
	while (dup[index])
	{
		dup[index] = f(index, dup[index]);
		index++;
	}
	return (dup);
}
/*
int	main(void)
{
	char	*str;

	str = ft_strmapi ("iergiaer'giaerigj'e;awrog rawopg", tolower_toupper);
	printf ("\n%s\n\n", str);
	return (0);
}
*/
