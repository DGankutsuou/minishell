/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:05:22 by ostouayr          #+#    #+#             */
/*   Updated: 2025/03/15 17:48:29 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	handdle_builtins(char **cmd_args)
{
	if (ft_strncmp(cmd_args[0], "pwd", 4) == EQUAL)
		b_pwd();
	if (ft_strncmp(cmd_args[0], "exit", 5) == EQUAL)
	{
		if (cmd_args[1] != NULL)
			b_exit(TRUE, ft_atoi(cmd_args[1]));
		else
			b_exit(FALSE, 0);
	}
}
void creat_linked_list(t_cmdl **list,char **cmd_args,  char *line)
{
	int i;
	char **arr;
	t_cmdl *node;

	i = 0;
	while (i < count_words(line , "&|<>()"))
	{
		arr = ft_split(cmd_args[i], ' '); // a add a linked list and then i advanced_split command by spaces so
		node = ft_lstnew(arr);
		ft_lstadd_back(list, node);
		i++;
	}
}

int	is_valid_place(char *operator)
{
	if (ft_strncmp(operator, "&&", 2) && ft_strncmp(operator, "||", 2) \
	&& ft_strncmp(operator, "|", 1) && ft_strncmp(operator, "&", 1))
		return (1);
	return (0);
}

int check_syntax(t_cmdl **cmds)
{
	t_cmdl *node;

	node = *cmds;
	if (!is_valid_place(node->content[0]))
		return (ft_putstr_fd("syntax error\n", 1), 0);
	while (node)
	{
		if (node->next == NULL)
		{
			if (!is_valid_place(node->content[0]))
				return (ft_putstr_fd("syntax error\n", 1), 0);
		}
		node = node->next;
	}
	return (1);
}

int	main(int ac, char **av, char **envp)
{
	char	*line;
	char	**cmd_args;
	t_cmdl *cmds;
	(void)ac;
	(void)av;
	(void)envp;

	cmds = NULL;
	while (1)
	{
		line = readline("minishell$ ");
		if (!line)
		{
			rl_clear_history();
			exit(EXIT_SUCCESS);
		}
		add_history(line);
		cmd_args = advanced_split(line, "&|<>()");
		if (cmd_args)
		{
			creat_linked_list(&cmds, cmd_args, line);
			if (cmds && check_syntax(&cmds))
			{
				printf("work\n");
			}
		}
		// handdle_builtins(cmds->content);
		free(line);
		ft_lstclear(&cmds, ft_free_matrix);
		// ft_free_matrix(cmds->content);
	}
	return (0);
}
