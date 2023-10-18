/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:12:08 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/08 16:36:16 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t		i;

	i = 0;
	while (i < num)
	{
		((char *)ptr)[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
