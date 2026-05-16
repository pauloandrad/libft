/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:51:33 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/16 19:12:23 by pahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *p;

	i = 0;
	p = NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			p = (s[i]);
		}
	}

	return p;
}