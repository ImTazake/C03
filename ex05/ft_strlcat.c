/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:42:38 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 13:01:31 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char			dest[20] = "Hello";
// 	char			src[] = " World!";
// 	unsigned int	len;
// 	int				i;
// 	len = ft_strlcat(dest, src, 20);
// 	i = 0;
// 	while (dest[i])
// 	{
// 		write(1, &dest[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	if (len == 12)
// 		write(1, "12\n", 3);
// 	return (0);
// }