/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:20:11 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/15 16:35:14 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;
	size_t				i;

	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
	i = 0;
	while ((string1[i] || string2[i]) && i < n)
	{
		if (string1[i] != string2[i])
		{
			return (string1[i] - string2[i]);
			break ;
		}
		i++;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>

// int	main(void)
//{
//	const char	s1[] = "Man4ar";
//	const char	s2[] = "Manar";
//	int			i;
//	int			j;

//	j = strncmp(s1, s2, 10);
//	i = ft_strncmp(s1, s2, 10);
//	printf("%d\n", i);
//	printf("%d\n", j);
//	return (0);
//}
