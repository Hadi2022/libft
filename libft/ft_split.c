/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:59:50 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/05 20:32:45 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	act_pos;
	int	str_count;

	act_pos = 0;
	str_count = 0;
	if (s[act_pos] == c)
	{
		str_count--;
	}
	while (s[act_pos] != '\0')
	{
		if (s[act_pos] == c && s[act_pos +1] != c && s[act_pos +1] != '\0')
		{
			str_count++;
		}
		act_pos++;
	}
	str_count++;
	return (str_count);
}

static char	*malloc_strings(const  char *s, char c)
{
	char	*word;
	int	i;

	i = 0;
	while (s[i] & s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0':
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int	words;
	char	**tab;
	int	i;

	if (!s)
	{
		return (NULL);
	}
	words = count_strings(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if(!tab)
	{
		return (NULL);
	}
	i = 0;
	while (*s)
	{
		while(*s && *s == c)
		{
			s++;
		}
		if(*s && *s != c)
		{
			tab[i] = malloc_strings(s, c);
			i++;
			while (*s && *s != c)
			{
				s++;
			}
		}
	}
	tab[i] = NULL;
	return (tab);
}
