/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:35:44 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/04 20:45:53 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(int n)
{
	int	number_len;

	number_len = 1;
	if (n < 0)
		number_len = 2;
	while (n / 10)
	{
		n /= 10;
		number_len++;
	}
	return (number_len);
}

char	*ft_itoa(int n)
{
	int		n_len;
	char	*number;
	int		first_index;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_len = number_len(n);
	number = (char *)malloc(n_len + 1);
	if (!number)
		return (NULL);
	first_index = 0;
	if (n < 0)
	{
		n *= -1;
		number[0] = '-';
		first_index++;
	}
	number[n_len--] = '\0';
	while (n_len >= first_index)
	{
		number[n_len] = n % 10 + '0';
		n /= 10;
		n_len--;
	}
	return (number);
}
/*
int	main(void)
{
	printf ("\n%s\n\n", ft_itoa(-133742));
	return (0);
}
*/
