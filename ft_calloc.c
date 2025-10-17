/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:51:30 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/17 12:57:40 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = malloc(count * size);
	if (temp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
	free(temp);
	temp = NULL;
}

//#include <stdio.h>

// int	main(void)
//{
//	int	number;
//	int	*scores;

//	number = 0;
//	printf("enter a number: ");
//	scanf("%d", &number);
//	scores = ft_calloc(number, sizeof(int));
//	for (int i = 0; i < number; i++)
//	{
//		printf("Enter scor #%d", i + 1);
//		scanf("%d", &scores[i]);
//	}
//	for (int i = 0; i < number; i++)
//	{
//		printf("%d ", scores[i]);
//	}
//}
