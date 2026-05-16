/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 19:46:01 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/16 19:53:01 by pahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *p_dest = (unsigned char *)dest;
	const unsigned char *p_src = (const unsigned char *)src;

	i = 0;

	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}

	return (dest);
}