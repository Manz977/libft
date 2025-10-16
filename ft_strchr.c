/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:25:13 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/15 19:11:16 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned	i;
	char		cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
		{
			// we use type casting because s is a const char and we want it to be a normal char
			return ((char *)&s[i]);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>

// int	main(void)
//{
//	char	tweet[] = "This is my @mention";
//	char	*mention;

//	mention = ft_strchr(tweet, '@');
//	printf("mention: %s\n", mention);
//	printf("%p\n", mention);
//	printf("%p\n", tweet + 11);
//	mention[0] = '*';
//	printf("%s\n", tweet);
//	if (ft_strchr(tweet, '#') == NULL)
//	{
//		printf("strchr returned Null\n");
//	}
//	return (0);
//}
