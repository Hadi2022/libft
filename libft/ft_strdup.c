/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:04:50 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/22 11:15:45 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = ft_strlen(s1);
	s2 = (char *)malloc(i + 1);
	if (!(s2))
	{
		return (NULL);
	}
	ft_memcpy(s2, s1, i);
	s2[i] = '\0';
	return (s2);
}
