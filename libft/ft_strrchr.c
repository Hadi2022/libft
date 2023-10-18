/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:34:08 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/13 18:51:38 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	x;
	size_t	i;

	i = 0;
	x = ((char)c);
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (str[i] == x)
		{
			return (&((char  *)str)[i]);
		}
		i--;
	}
	if (i == 0)
	{
		if (str[i] == x)
		{
			return (&((char *)str)[i]);
		}
	}
	return (0);
}
