/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:31:33 by blessed           #+#    #+#             */
/*   Updated: 2025/03/15 17:49:11 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	len;
	int	op;

	op = 0;
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && checksep(str[i], charset))
		{
			if (checksep(str[i + 1], charset) && str[i] != str[i + 1])
				return (-1);
			if (str[i] == '&' && str[i + 1] != '&')
				return (-1);
			else if (str[i] == '&' && str[i + 1] == '&')
				i++;
			if (op++ == 0)
				len++;
			i++;
		}
		if (op > 2)
			return (-1);
		if (str[i] != '\0')
			len++;
		while (str[i] != '\0' && !checksep(str[i], charset))
			i++;
		op = 0;
	}
	return (len);
}

int	lentosep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !checksep(str[i], charset))
	{
		i++;
	}
	return (i);
}

char	*copy_word(char *str, char *charset, int status)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	if (status == 1)
		len = lentosep(str, charset);
	else if (checksep(str[i + 1], charset))
		len = 2;
	else if (!checksep(str[i + 1], charset))
		len = 1;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
void complete_split(char **result, char *str, char *charset)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && checksep(*str, charset))
		{
			if (i == 0)
			result[j++] = copy_word(str, charset, 0);
			if (checksep(str[i + 1], charset))
				str = str + 2;
			else if (!checksep(str[i + 1], charset))
			str++;
			i++;
		}
		if (*str != '\0')
			result[j++] = copy_word(str, charset, 1);
		while (*str != '\0' && !checksep(*str, charset))
			str++;
		i = 0;
	}
	result[j] = 0;
}
char	**advanced_split(char *str, char *charset)
{
	int		i;
	char	**result;
	int		len;
	int		j;

	i = 0;
	j = 0;
	(void)i;
	(void)j;
	len = count_words(str, charset);
	if (len ==  -1)
		return (ft_putstr_fd("syntax error\n", 1), NULL);
	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (0);
	complete_split(result, str, charset);
	return (result);
}
