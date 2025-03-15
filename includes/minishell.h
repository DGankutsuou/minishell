/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:06:35 by ostouayr          #+#    #+#             */
/*   Updated: 2025/03/15 17:26:19 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define TRUE 1
# define FALSE 0
# define EQUAL 0

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "../libft/libft.h"

void	b_pwd(void);
void	b_exit(int is_there_stat, int status);

//  this added today
void	ft_check_operator(char **cmd_args, int i, char *line);
char	**advanced_split(char *str, char *charset);
char	*copy_word(char *str, char *charset, int status);
int	lentosep(char *str, char *charset);
int	count_words(char *str, char *charset);
int	checksep(char c, char *charset);


#endif
