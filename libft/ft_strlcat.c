/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:30:13 by aortigos          #+#    #+#             */
/*   Updated: 2023/09/22 18:35:30 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	len = i;
	while (src[i - len] && i + 1 < size)
	{
		dest[i] = src[i - len];
		i++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	return (len + ft_strlen(src));
}
