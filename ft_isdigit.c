/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:25:41 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/12 17:07:35 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i;
// 	int arg;

// 	arg = '1';
// 	i = ft_isdigit(arg);

// 	printf("%d\n", i);
// 	printf("%c\n", arg);
// }