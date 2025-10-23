/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:15:19 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/23 14:03:51 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*results;

	if (!s || !f)
	{
		return (NULL);
	}
	results = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!results)
	{
		return (NULL);
	}
	i = 0;
	while (i < ft_strlen(s))
	{
		results[i] = (*f)(i, s[i]);
		i++;
	}
	results[i] = 0;
	return (results);
}
