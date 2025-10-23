/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:19:04 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/23 21:28:57 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count(const char *s, char c);
void	ft_initiate_v(size_t *i, int *j, int *start);
char	**ft_free(char **str);
char	*f_w(const char *str, int start, int end);

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	int		j;
	int		start;

	ft_initiate_v(&i, &j, &start);
	res = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			res[j] = f_w(s, start, i);
			if (!(res[j]))
				return (ft_free(res));
			start = -1;
			j++;
		}
		i++;
	}
	return (res);
}

void	ft_initiate_v(size_t *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = -1;
}
char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	*f_w(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}
int	ft_word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (count);
}
