/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:38:04 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/08 17:53:33 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_cmdl *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
void	f(void *content)
{
	if (content)
		*((int *)content) = 20;
}

int	main(void)
{
	t_list	*head;
	t_list	*current;
	int		arr[4] = {42, 1337, 21, 1336};

//	t_list	*last;
	head = (t_list *)malloc (sizeof (t_list));
	head->next = (t_list *)malloc (sizeof (t_list));
	head->next->next = (t_list *)malloc (sizeof (t_list));
	head->next->next->next = NULL;
	head->content = &arr[0];
	head->next->content = &arr[1];
	head->next->next->content = &arr[2];
	ft_lstadd_front_bonus (&head, ft_lstnew_bonus (&arr[3]));
	ft_lstiter_bonus (head, &f);
	current = head;
	while (current)
	{
		printf ("%d\n", *((int *)(current->content)));
		current = current->next;
	}
	return (0);
}
*/
