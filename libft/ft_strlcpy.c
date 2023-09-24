/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:20:19 by aortigos          #+#    #+#             */
/*   Updated: 2023/09/22 21:28:47 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src)
	{
		return (0);
	}
	if (size != 0)
	{
		while (src[i] != '\0' && size > 0)
		{
			dest[i] = src[i];
			size--;
			i++;
		}
		dest[i] = '\0';
	}
	return (i);
}
