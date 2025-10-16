/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:11:48 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/15 20:34:08 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

//#include <stdio.h>

// int	main(void)
//{
//	const char	*haystack = "Hello, world!";
//	const char	*needle1 = "world";
//	const char	*needle2 = "Hello";
//	const char	*needle3 = "test";
//	const char	*needle4 = "";
//	char		*result;

//	// Test 1: needle in haystack
//	result = ft_strnstr(haystack, needle1, 20);
//	if (result)
//		printf("Found '%s' in '%s': '%s'\n", needle1, haystack, result);
//	else
//		printf("Did not find '%s' in '%s'\n", needle1, haystack);
//	// Test 2: needle at the beginning
//	result = ft_strnstr(haystack, needle2, 5);
//	if (result)
//		printf("Found '%s' in '%s': '%s'\n", needle2, haystack, result);
//	else
//		printf("Did not find '%s' in '%s'\n", needle2, haystack);
//	// Test 3: needle not in haystack
//	result = ft_strnstr(haystack, needle3, 20);
//	if (result)
//		printf("Found '%s' in '%s': '%s'\n", needle3, haystack, result);
//	else
//		printf("Did not find '%s' in '%s'\n", needle3, haystack);
//	// Test 4: empty needle
//	result = ft_strnstr(haystack, needle4, 20);
//	if (result)
//		printf("Found empty needle in '%s': '%s'\n", haystack, result);
//	else
//		printf("Did not find empty needle in '%s'\n", haystack);
//	return (0);
//}
