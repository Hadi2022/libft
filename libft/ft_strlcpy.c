/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:20:19 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/22 10:33:37 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	if (src == NULL)
	{
		return (0);
	}
	len = ft_strlen(src);
	if (size == 0)
	{
		return (len);
	}
	j = size - 1;
	while (j > 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j--;
	}
	dest[i] = '\0';
	return (len);
}
