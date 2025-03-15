/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:57:19 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/08 17:49:23 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_cmdl	*ft_lstlast(t_cmdl *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*current;
	t_list	*last;
	int		arr[4] = {42, 1337, 21, 1336};

	head = (t_list *)malloc (sizeof (t_list));
	head->next = (t_list *)malloc (sizeof (t_list));
	head->next->next = (t_list *)malloc (sizeof (t_list));
	head->next->next->next = NULL;
	head->content = &arr[0];
	head->next->content = &arr[1];
	head->next->next->content = &arr[2];
	ft_lstadd_front_bonus (&head, ft_lstnew_bonus (&arr[3]));
	current = head;
	while (current)
	{
		printf ("%d\n", *((int *)(current->content)));
		current = current->next;
	}
	last = ft_lstlast_binus (head);
	printf ("%d\n", *((int *)(last->content)));
	return (0);
}
*/
