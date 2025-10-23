/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:21:00 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/23 21:52:01 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		int_len(long nbr);

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		result[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (result);
}

int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count = 1;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

//#include <stdio.h>
//#include <stdlib.h>

// int	main(void)
//{
//	int		numbers[] = {0, 123, -456, 7890};
//	char	*str;

//	for (int i = 0; i < 4; i++)
//	{
//		str = ft_itoa(numbers[i]);
//		if (str)
//		{
//			printf("ft_itoa(%d) = %s\n", numbers[i], str);
//			free(str);
//		}
//		else
//		{
//			printf("Memory allocation failed for %d\n", numbers[i]);
//		}
//	}
//	return (0);
//}
