/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:50:31 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/23 18:34:16 by pahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <limits.h>
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	size_t	max_nmemb;
	void	*p;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	max_nmemb = INT_MAX / size;
	if (max_nmemb > nmemb)
		return (NULL);
	p = malloc(nmemb * size);
	if (p != NULL)
		ft_bzero(p, nmemb * size);
	return (p);
}
