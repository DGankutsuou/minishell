/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:57:12 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/08 17:53:22 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_cmdl *lst, void (*del)(char **))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void	del(void *content)
{
	free (content);
}

int	main(void)
{
	t_list	*head;
	t_list	*current;
	int		*arr;

	arr = malloc (16);
	arr[0] = 42;
	arr[1] = 1337;
	arr[2] = 21;
	arr[3] = 1336;
	head = (t_list *)malloc (sizeof (t_list));
	// head = NULL;
	head->next = (t_list *)malloc (sizeof (t_list));
	head->next->next = (t_list *)malloc (sizeof (t_list));
	head->next->next->next = NULL;
	head->content = &arr[0];
	head->next->content = &arr[1];
	head->next->next->content = calloc (1,4);
	*((int *)head->next->next->content) = 5;
	ft_lstadd_back (&head, ft_lstnew (&arr[3]));
	ft_lstdelone (head->next->next, del);
	current = head;
	while (current && current->content)
	{
		printf ("%d\n", *((int *)(current->content)));
		current = current->next;
	}
	return (0);
}
*/
