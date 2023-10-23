/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:15:06 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/23 18:29:42 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*x;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		x = ft_calloc(1, sizeof(char));
		if (!x)
			return (NULL);
	}
	else
	{
		i = ft_strlen(s + start);
		if (!(i < len))
			i = len;
		x = (char *)malloc((i + 1) * sizeof(char));
		if (!x)
			return (NULL);
		x[i] = 0;
		while (i-- > 0)
			x[i] = s[start + i];
	}
	return (x);
}
