/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:39:33 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/16 16:25:06 by pahenriq         ###   ########.fr       */
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

int	main(void)
{
	int	letter;

	letter = tolower('A');
	write(1, &letter, 1);
	return (0);
}
