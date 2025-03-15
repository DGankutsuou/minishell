/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:25:47 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/07 17:43:03 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_matrix(char **matrix)
{
	char	**saver;

	saver = matrix;
	while (*matrix)
	{
		free (*matrix);
		matrix++;
	}
	free (saver);
}
/*
	This function is used to free a 2d array
*/
