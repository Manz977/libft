/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 22:26:59 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/14 11:03:26 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i;
// 	char c[10] = "manar";

// 	i = ft_strlen(c);
// 	printf("%d", i);
// }
