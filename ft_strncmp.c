/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:07:11 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/16 18:15:44 by pahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i])
	{
		if (s1[i] != s2[i])
			return ((int)s1[i] - s2[i]);
		i++;
	}
	return ((int)s1[i] - s2[i]);
}
