/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:43:43 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/22 10:56:39 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char const *s1, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			j = 0;
		else if (j == 0)
		{
			j = 1;
			i++;
		}
		s1++;
	}
	return (i);
}

static int	count_char(char const *s2, char c, int i)
{
	int	len;

	len = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char	**free_mem(char const **dest, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dest[j]);
	}
	free(dest);
	return (NULL);
}

static char	**split(char const *s, char **dest, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dest[j] = (char *)malloc(sizeof(char) * count_char(s, c, i) + 1);
		if (dest[j] == NULL)
			return (free_mem((char const **)dest, j));
		while (s[i] != '\0' && s[i] != c)
			dest[j][k++] = s[i++];
		dest[j][k] = '\0';
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;

	if (s == NULL)
		return (NULL);
	i = count_str(s, c);
	dest = (char **)malloc(sizeof(char *) * (i + 1));
	if (dest == NULL)
		return (NULL);
	return (split(s, dest, c, i));
}
