/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:42:30 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 12:51:20 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*result;
// 	result = ft_strstr("Ola Mundo", "Mundo");
// 	if (result)
// 		write(1, result, 5);
// 	else
// 		write(1, "NULL", 4);
// 	write(1, "\n", 1);
// 	return (0);
// }