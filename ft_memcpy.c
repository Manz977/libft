/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:57:38 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/23 21:58:16 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
	{
		return (NULL);
	}
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//#include <string.h>

// int	main(void)
//{
//	char	s[] = "ManarMonzer";
//	char	d[12];
//	char	c[] = "abcdefghijklmnopqurstuvwxyz";
//	char	g[27];

//	ft_memcpy(d, s, sizeof(char) * 12);
//	printf("My: %s\n", d);
//	memcpy(g, c, sizeof(char) * 27);
//	printf("g: %s\n", g);
//	return (0);
//}
