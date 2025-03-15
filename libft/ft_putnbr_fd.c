/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:58:22 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/06 10:41:30 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
/*
int	main(void)
{
	int	fd;
	int	n;

	fd = open ("file.txt", O_RDWR | O_CREAT, 0600);
	ft_putnbr_fd (-1234, fd);
	ft_putchar_fd ('\n', fd);
	ft_putnbr_fd (1234, fd);
	ft_putchar_fd ('\n', fd);
	ft_putnbr_fd (-2147483648, fd);
	ft_putchar_fd ('\n', fd);
	ft_putnbr_fd (2147483647, fd);
	ft_putchar_fd ('\n', fd);
	ft_putnbr_fd ('3', fd);
	//n = close (0);
	scanf ("%d", &n);
	printf ("%d\n", n);
	return (0);
}
*/
