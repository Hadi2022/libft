/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:18:07 by aortigos          #+#    #+#             */
/*   Updated: 2023/09/20 21:18:58 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	unsigned char		*x;
	const unsigned char	*y;

	x = ((unsigned char *)dst);
	y = ((const unsigned char *)src);
	if (x != y)
	{
		if (x > y)
		{
			y = y + num - 1;
			x = x + num - 1;
			while (num > 0)
			{
				*x = *y;
				x--;
				y--;
				num--;
			}
		}
		else
		{
			dst = ft_memcpy(x, y, num);
		}
	}
	return (dst);
}
