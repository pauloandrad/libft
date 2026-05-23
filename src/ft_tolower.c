/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:39:33 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/23 16:41:24 by pahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	tolower(int character)
{
	if (character >= 'A' && character <= 'Z')
	{
		character += 32;
	}
	return (character);
}
