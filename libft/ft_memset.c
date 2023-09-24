/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:12:08 by aortigos          #+#    #+#             */
/*   Updated: 2023/09/22 21:29:48 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t		i;

	i = 0;
	while (num > 0)
	{
		((char *)ptr)[i] = (unsigned char)value;
		i++;
		num--;
	}
	return (ptr);
}
