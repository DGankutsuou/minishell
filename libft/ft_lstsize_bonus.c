/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:57:29 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/08 17:54:52 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_cmdl *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
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
	printf ("%d\n", ft_lstsize_bonus (head));
	return (0);
}
*/
