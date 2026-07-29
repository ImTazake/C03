/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:42:18 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 12:40:03 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello";
// 	if (ft_strcmp(str1, str2) == 0)
// 		write(1, "OK\n", 3);
// 	else
// 		write(1, "ERRO\n", 5);
// 	return (0);
// }