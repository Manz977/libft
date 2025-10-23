/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:04:19 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/23 22:09:34 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (!dest && !src)
		return (0);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d > s && d < s + n)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

//#include <stdio.h>

// int	main(void)
//{
//	int	source[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int	destination[10];

//	ft_memmove(source + 2, source, sizeof(int) * 8);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("destination[%d]=%d\n", i, destination[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("source[%d]=%d\n", i, source[i]);
//	}
//	return (0);
//}
