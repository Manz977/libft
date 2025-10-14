/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:47:20 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/14 12:15:40 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	if (dstsize == 0)
	{
		return (len);
	}
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

//#include <stdio.h>
//#include <string.h>

// int	main(void)
//{
//	char	s[] = "Manar";
//	char	d[6];
//	size_t	i;

//	i = ft_strlcpy(d, s, sizeof(char) * 6);
//	printf("%li\n", i);
//}
