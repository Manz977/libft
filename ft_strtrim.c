/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:32:06 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/22 16:53:46 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(char const *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*results;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (s1[i] && trim(set, s1[i]))
		i++;
	while (j > i && trim(set, s1[j - 1]))
		j--;
	results = malloc((j - i + 1) * sizeof(char));
	if (results == NULL)
		return (NULL);
	while (i < j)
	{
		results[k] = s1[i];
		i++;
		k++;
	}
	results[k] = '\0';
	return (results);
}

static int	trim(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

//#include <stdio.h>

// int	main(void)
//{
//	char	*test;

//	test = "******Hello******";
//	printf("%s\n", ft_strtrim(test, "*"));
//	return (0);
//}
