/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:25:52 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/15 19:10:47 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;
	size_t				i;

	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)string1[i] != (unsigned char)string2[i])
		{
			return ((unsigned char)string1[i] - (unsigned char)string2[i]);
		}
		i++;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>

// int	main(void)
//{
//	int	arr1[] = {1, 2};
//	int	arr2[] = {1, 1};

//	if (ft_memcmp(arr1, arr2, 2 * sizeof(int)) == 0)
//	{
//		printf("Arrays are the same\n");
//	}
//	else
//	{
//		printf("Arrays are not the same\n");
//	}
//	return (0);
//}

// void	run_test(const void *a, const void *b, size_t n, const char *desc)
//{
//	int	std;
//	int	mine;

//	std = memcmp(a, b, n);
//	mine = ft_memcmp(a, b, n);
//	printf("%-30s  std: %4d   mine: %4d   %s\n", desc, std, mine,
//		(std == mine) ? "✅" : "❌");
//}

// int	main(void)
//{
//	// Basic equality
//	run_test("abc", "abc", 3, "\"abc\" vs \"abc\"");
//	// Single difference
//	run_test("abc", "abd", 3, "\"abc\" vs \"abd\"");
//	// Difference at beginning
//	run_test("xbc", "abc", 3, "\"xbc\" vs \"abc\"");
//	// Zero-length compare
//	run_test("abc", "xyz", 0, "zero-length");
//	// Binary data: unsigned char edge cases
//	unsigned char a1[] = {0x01};
//	unsigned char a2[] = {0xFF};
//	run_test(a1, a2, 1, "0x01 vs 0xFF");
//	run_test(a2, a1, 1, "0xFF vs 0x01");

//	return (0);
//}
