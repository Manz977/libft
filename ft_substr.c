/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:20:50 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/23 21:25:23 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*ss;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_calloc(1, sizeof(char)));
	if (len > len_s - start)
		len = len_s - start;
	ss = ft_calloc(len + 1, sizeof(char));
	if (!ss)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
// int	main(void)
//{
//	const char	*text = "Hello World!";
//	char		*sub;

//	printf("Original string: \"%s\"\n\n", text);
//	// ✅ Example 1: Normal substring within range
//	sub = ft_substr(text, 0, 5);
//	printf("ft_substr(text, 0, 5): \"%s\"\n", sub);
//	free(sub);
//	// ✅ Example 2: Starting in the middle
//	sub = ft_substr(text, 6, 5);
//	printf("ft_substr(text, 6, 5): \"%s\"\n", sub);
//	free(sub);
//	sub = ft_substr(text, 6, 50);
//	printf("ft_substr(text, 6, 50): \"%s\"\n", sub);
//	free(sub);
//	sub = ft_substr(text, 50, 5);
//	if (sub == NULL)
//		printf("ft_substr(text, 50, 5): NULL (start > string length)\n");
//	else
//		free(sub);
//	return (0);
//}
