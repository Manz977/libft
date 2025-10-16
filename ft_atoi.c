/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:36:23 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/16 15:45:43 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(int s)
{
	if (s == 9 || s == 10 || s == 11 || s == 12 || s == 13 || s == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	np;

	i = 0;
	j = 0;
	np = 1;
	while (ft_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			np = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + (str[i] - '0');
		i++;
	}
	return (j * np);
}

//#include <stdio.h>

// int	main(void)
//{
//	char	str[] = "   ---+--+1234ab567";
//	int		result;

//	result = ft_atoi(str);
//	printf("Input: \"%s\"\n", str);
//	printf("ft_atoi result: %d\n", result);
//	return (0);
//}
