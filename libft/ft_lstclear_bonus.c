/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:37:59 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/08 17:52:49 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_cmdl **lst, void (*del)(char **))
{
	t_cmdl	*current;
	t_cmdl	*tmp;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
/*
void	del(void *content)
{
	free (content);
}

int	main(void)
{
	t_list	*head;

	//t_list	*current;
	head = (t_list *)malloc (sizeof (t_list));
	head->next = (t_list *)malloc (sizeof (t_list));
	head->next->next = (t_list *)malloc (sizeof (t_list));
	head->next->next->next = NULL;
	head->content = ft_calloc(1, 4);
	head->next->content = ft_calloc(1, 4);
	head->next->next->content = ft_calloc (1,4);
	ft_lstadd_back_bonus (&head, ft_lstnew_bonus (ft_calloc(1, 4)));
	//head = NULL;
	ft_lstclear_bonus (&head, &del);
	printf ("%p\n",head);
	return (0);
}
*/
