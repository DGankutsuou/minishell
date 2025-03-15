/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:58:13 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/05 10:58:14 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open ("file.txt", O_RDWR | O_CREAT, 0600);
	ft_putchar_fd ('A', fd);
	ft_putchar_fd ('B', fd);
	ft_putchar_fd ('C', fd);
	ft_putchar_fd ('D', fd);
	ft_putchar_fd ('\n', fd);
	return (0);
}
*/
