/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:38:10 by aabouriz          #+#    #+#             */
/*   Updated: 2025/03/13 22:52:26 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*f(void *content)
{
	content = malloc (4);
	if (!content)
		return (NULL);
	return (content);
}

void	del(void *content)
{
	free(content);
}
*/
t_cmdl	*ft_lstmap(t_cmdl *lst, void *(*f)(void *), void (*del)(char **))
{
	t_cmdl	*head;
	t_cmdl	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*new_list;
	t_list	*current;

	head = NULL;
	ft_lstadd_back (&head, ft_lstnew(NULL));
	ft_lstadd_back (&head, ft_lstnew(NULL));
	ft_lstadd_back (&head, ft_lstnew(NULL));
	new_list = ft_lstmap (head, f, del);
	current = new_list;
	while (current)
	{
		*((int *)current->content) = 20;
		printf ("%d\n", *((int *)current->content));
		current = current->next;
	}
	return (0);
}
*/
