/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:09:50 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/12 20:32:00 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char b[10];
// 	int i;
// 	i = 0;
// 	ft_memset(b, 'a', sizeof(char) * 10);

// 	while (i < 10)
// 	{
// 		printf("%c ", b[i]);
// 		i++;
// 	}
// }