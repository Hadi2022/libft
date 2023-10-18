/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:50:00 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/18 20:02:20 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	re;

	i = 0;
	re = 0;
	if (n > 0)
	{
		while (i < n && (s1[i] != '\0' && s1[i] == s2[i]))
		{
			i++;
		}
	}
	if (i == n)
	{
		i--;
	}
	re = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (re);
}
