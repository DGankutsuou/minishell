/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:57:24 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/13 21:11:10 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_cmdl	*ft_lstnew(char **content)
{
	t_cmdl	*new;

	new = (t_cmdl *) malloc(sizeof(t_cmdl));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*current;
	int		arr[4] = {42, 1337, 21, 1336};

	head = (t_list *)malloc (sizeof (t_list));
	head->next = (t_list *)malloc (sizeof (t_list));
	head->next->next = (t_list *)malloc (sizeof (t_list));
	head->next->next->next = ft_lstnew(&arr[3]);
	head->content = &arr[0];
	head->next->content = &arr[1];
	head->next->next->content = &arr[2];
	current = head;
	while (current && current->content)
	{
		printf ("%d\n", *((int *)(current->content)));
		current = current->next;
	}
	return (0);
}
*/
