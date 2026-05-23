/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:51:33 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/23 19:20:09 by pahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	p = NULL;
	while (*s)
	{
		if (*s == c)
			p = ((char *)s);
		s++;
	}
	return (p);
}
// int main()
// {
// 	char		str2[] = "bonjour";
// 	ft_strrchr(str2, 'b');
// }
