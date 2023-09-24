/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:22:45 by aortigos          #+#    #+#             */
/*   Updated: 2023/09/22 20:44:40 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	c;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	c = ft_strlen(needle);
	while (*haystack && c <= n)
	{
		if (ft_strncmp(haystack, needle, c) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		n--;
	}
	return (NULL);
}
