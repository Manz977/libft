/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:34:00 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/12 20:55:01 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char b[10];
// 	int i;
// 	i = 0;
// 	ft_bzero(b, sizeof(char) * 10);

// 	while (i < 10)
// 	{
// 		printf("%i ", b[i]);
// 		i++;
// 	}
// }