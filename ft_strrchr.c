/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:48:24 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/14 19:16:06 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*n;

	n = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			// we use type casting because s is a const char and we want it to be a normal char
			n = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		n = (char *)s;
	}
	return (n);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *tests[] = {"Hello world", "Hello world", "Hello world",
		"Hello world", "Hello world", "", "abcabcabc", "abcabcabc",
		"abcabcabc"};
	int chars[] = {'o', 'l', 'H', 'z', '\0', 'a', 'b', '\0', 'a'};

	int n = sizeof(chars) / sizeof(chars[0]);

	for (int i = 0; i < n; i++)
	{
		const char *s = tests[i];
		int c = chars[i];

		char *res_std = strrchr(s, c);
		char *res_ft = ft_strrchr(s, c);

		printf("Test %d:\n", i + 1);
		printf("String: \"%s\"\n", s);
		printf("Char: '%c' (ASCII %d)\n", (c == '\0' ? '0' : c), c);
		printf("strrchr   -> %s\n", res_std ? res_std : "NULL");
		printf("ft_strrchr -> %s\n", res_ft ? res_ft : "NULL");

		if ((res_std == NULL && res_ft == NULL) || (res_std && res_ft
				&& strcmp(res_std, res_ft) == 0))
			printf("✅ Match\n\n");
		else
			printf("❌ Mismatch\n\n");
	}

	return (0);
}
