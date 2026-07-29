/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:42:24 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 12:43:58 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[20] = "Hello";
// 	char	src[] = " World!";
// 	int		i;
// 	ft_strcat(dest, src);
// 	i = 0;
// 	while (dest[i])
// 	{
// 		write(1, &dest[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }