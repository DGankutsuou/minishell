/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:03:58 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/04 20:52:59 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	tolower_toupper(unsigned int index, char *c)
{
	if (ft_isalpha (*c))
	{
		if(index % 2 == 0)
		{
			if (*c <= 'z' && *c >= 'a')
				*c -= 32;
		}
		else
		{
			if (*c <= 'Z' && *c >= 'A')
				*c += 32;
		}
	}
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &(s[index]));
		index++;
	}
}
/*
int	main(void)
{
	char	str[33] = "iergiaer'SRFRFEFG'e;awrog rawopg\0";

	ft_striteri (str, tolower_toupper);
	printf ("\n%s\n\n", str);
	return (0);
}
*/
