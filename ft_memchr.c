/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:06:49 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/15 15:32:11 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		cc;
	size_t				i;

	str = (const unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>

// int	main(void)
//{
//	char	data[] = {'q', 'r', 's', 't', 'p', 'a', 'x'};
//	char	*pos;
//	char	*p;

//	pos = memchr(data, 't', 7);
//	p = ft_memchr(data, 't', 7);
//	printf("main function pos[0] = %c\n", pos[0]);
//	printf("my function pos[0] = %c\n", p[0]);
//	return (0);
//}
