/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:15:06 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/19 22:01:19 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*x;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	x = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !x)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			x[j] = s[i];
			j++;
		}
		i++;
	}
	x[j] = '\0';
	return (x);
}
