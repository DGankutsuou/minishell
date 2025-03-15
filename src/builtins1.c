/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:22:03 by blessed           #+#    #+#             */
/*   Updated: 2025/03/08 17:20:42 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"
void	b_exit(int is_there_stat, int status)
{
	if (is_there_stat == TRUE)
		exit (status);
	else
		exit (EXIT_SUCCESS);
}

/*
void	b_echo(char *str, int option_n)
{
	if (option_n)
		ft_putstr_fd(str, STDOUT_FILENO);
	else
		ft_putendl_fd(str, STDOUT_FILENO);
}*/

void	b_pwd(void)
{
	char	buf[1024];

	ft_putendl_fd(getcwd(buf, 1024), STDOUT_FILENO);
}
