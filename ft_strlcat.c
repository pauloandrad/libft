/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenriq <pahenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:16:06 by pahenriq          #+#    #+#             */
/*   Updated: 2026/05/16 18:25:20 by pahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	str_len;

	str_len = 0;
	while (src[str_len])
		str_len++;
	if (size == 0)
		return (str_len);
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len == size)
		return (size + str_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + str_len);
}
