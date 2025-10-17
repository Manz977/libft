/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:11:13 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/17 12:38:59 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;
	int		len_s1;
	int		i;

	i = 0;
	len_s1 = ft_strlen(s1);
	temp = malloc(len_s1 + 1 * sizeof(char));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (i <= len_s1)
	{
		temp[i] = s1[i];
		i++;
	}
	return (temp);
}

// int	main(void)
//{
//	const char	*original = "Testing bitteshon";
//	char		*copy;

//	copy = ft_strdup(original);
//	if (!copy)
//	{
//		printf("Memory allocation failed!\n");
//		return (1);
//	}
//	printf("Original: %s\n", original);
//		printf("Copy:     %s\n", copy);
//	free(copy);
//	return (0);
//}
