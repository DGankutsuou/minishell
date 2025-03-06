/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:36:15 by blessed           #+#    #+#             */
/*   Updated: 2025/03/06 17:18:35 by blessed          ###   ########.fr       */
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
	// 1: get line
	// 2: parce
	// 3: execute
	// 4: loop
	// compile with -lreadline
	char	*line;

	line = read_line();
	while (line)
	{
		printf ("%s\n", line);


		line = read_line(); // todo
	}
	return (0);
}
