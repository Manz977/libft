/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:20:50 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/17 13:08:17 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
<<<<<<< HEAD
	size_t	len_s;
	size_t	i;
	char	*ss;

	i = 0;
	len_s = ft_strlen(s);
	if (start > len_s)
		return (NULL);
	if (len > len_s - start)
		len = len_s - start;
	ss = ft_calloc(len + 1, sizeof(char));
	if (ss == NULL)
		return (NULL);
	while (i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}

// int	main(void)
//{
//	const char	*text = "Hello World!";
//	char		*sub;

//	printf("Original string: \"%s\"\n\n", text);
//	// ✅ Example 1: Normal substring within range
//	sub = ft_substr(text, 0, 5);
//	printf("ft_substr(text, 0, 5): \"%s\"\n", sub);
//	free(sub);
//	// ✅ Example 2: Starting in the middle
//	sub = ft_substr(text, 6, 5);
//	printf("ft_substr(text, 6, 5): \"%s\"\n", sub);
//	free(sub);
//	sub = ft_substr(text, 6, 50);
//	printf("ft_substr(text, 6, 50): \"%s\"\n", sub);
//	free(sub);
//	sub = ft_substr(text, 50, 5);
//	if (sub == NULL)
//		printf("ft_substr(text, 50, 5): NULL (start > string length)\n");
//	else
//		free(sub);
//	return (0);
//}
=======
  size_t len_s;
  size_t i;
  char *ss;

  i = 0;
  len_s = ft_strlen(s);
  if(start > len_s)
  {
    return (NULL);
  }
  if(len > len_s - start)
  len = len_s - start;

  ss = ft_calloc(len + 1, sizeof(char));
  if(ss == NULL)
  {
    return (NULL);
  }
  while (i < len)
  {
    ss[i] = s[start + i];
    i++;
  }
  ss[i] = '\0';
  return(ss);
}

// int main(void)
// {
//     const char *text = "Hello World!";
//     char *sub;

//     printf("Original string: \"%s\"\n\n", text);

//     // ✅ Example 1: Normal substring within range
//     sub = ft_substr(text, 0, 5);
//     printf("ft_substr(text, 0, 5): \"%s\"\n", sub);
//     free(sub);

//     // ✅ Example 2: Starting in the middle
//     sub = ft_substr(text, 6, 5);
//     printf("ft_substr(text, 6, 5): \"%s\"\n", sub);
//     free(sub);

//     // ✅ Example 3: Length goes beyond string end — should adjust automatically
//     sub = ft_substr(text, 6, 50);
//     printf("ft_substr(text, 6, 50): \"%s\"\n", sub);
//     free(sub);

//     // ✅ Example 4: Start index beyond string length — should return NULL
//     sub = ft_substr(text, 50, 5);
//     if (sub == NULL)
//         printf("ft_substr(text, 50, 5): NULL (start > string length)\n");
//     else
//         free(sub);

//     return 0;
// }
>>>>>>> 035dc36e24b5955a46e507fa9cfd40d88a93af5f
