/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:13:48 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/23 21:33:29 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*results;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	results = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (results == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(results, s1, len_s1 + 1);
	ft_strlcat(results, s2, len_s1 + len_s2 + 1);
	return (results);
}

//#include <stdio.h>

// int	main(void)
//{
//	const char	*str1 = "Hello, ";
//	const char	*str2 = "world!";
//	char		*joined;

//	joined = ft_strjoin(str1, str2);
//	if (joined == NULL)
//	{
//		printf("Memory allocation failed.\n");
//		return (1);
//	}
//	printf("Result: %s\n", joined);
//	// Remember to free the allocated memory
//	free(joined);
//	return (0);
//}
