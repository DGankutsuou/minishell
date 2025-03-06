/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:36:15 by blessed           #+#    #+#             */
/*   Updated: 2025/03/06 16:46:10 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*read_line()
{
	char	*line;

	line = readline("mini$ ");
	return (line);
}

int	main(int argc, char **argv)
{
	while (1)
	{
		char	*line;

		// 1: get line
		line = read_line(); // todo
		//printf ("%s\n", line);
		// 2: parce

		// 3: execute
	}
	return (0);
}
