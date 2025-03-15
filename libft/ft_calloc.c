/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blessed <blessed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:35:27 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/09 18:36:59 by blessed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (nmemb && size > (size_t)-1 / nmemb)
		return (NULL);
	ptr = (unsigned char *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return ((void *)ptr);
}
// int	main(void)
// {
// 	int	*ptr;

// 	ptr = malloc (0);
// 	printf ("%p\n", ptr);
// 	printf ("%zu\n", sizeof (*malloc (0)));

// 	free (ptr);
// }
