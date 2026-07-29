/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:42:28 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 12:44:36 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[20] = "Hello";
// 	char	src[] = " World!";
// 	int		i;
// 	ft_strncat(dest, src, 3);
// 	i = 0;
// 	while (dest[i])
// 	{
// 		write(1, &dest[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }