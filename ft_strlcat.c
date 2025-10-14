/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:18:01 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/14 15:53:29 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
	{
		return (dstsize + len_src);
	}
	i = len_dst;
	j = 0;
	while ((i + j) < (dstsize - 1) && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (len_dst + len_src);
}

// int	main(void)
//{
//	char		dst1[20] = "Hello";
//	const char	*src = " World!";
//	size_t		dstsize;
//	size_t		ret_ft;

//	dstsize = 12;
//	ret_ft = ft_strlcat(dst1, src, dstsize);
//	printf("%ld\n", ret_ft);
//	printf("%s\n", dst1);
//	return (0);
//}
