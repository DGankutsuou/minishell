/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:56:43 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/08 17:51:47 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_cmdl **lst, t_cmdl *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
