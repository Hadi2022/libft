/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:34:08 by aortigos          #+#    #+#             */
/*   Updated: 2023/09/22 18:49:17 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_ocurrence;
	size_t		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		if (str[i] == (char)c)
		{
			last_ocurrence = &str[i];
		}
	}
	return ((char *)last_ocurrence);
}
