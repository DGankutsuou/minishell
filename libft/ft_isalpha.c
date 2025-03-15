/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 06:48:20 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/04 10:36:01 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	upper_alpha;
	int	lower_alpha;

	upper_alpha = (c >= 'A' && c <= 'Z');
	lower_alpha = (c >= 'a' && c <= 'z');
	if (upper_alpha || lower_alpha)
		return (c);
	return (0);
}
