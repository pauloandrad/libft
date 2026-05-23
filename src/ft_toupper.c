/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:39:33 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/16 16:38:05 by pahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	toupper(int character)
{
	if (character >= 'a' && character <= 'z')
	{
		character -= 32;
	}
	return (character);
}
