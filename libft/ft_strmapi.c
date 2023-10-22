/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:12:53 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/22 16:16:34 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*x;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);

	x = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(x))
		return (NULL);
	while (i != ft_strlen(s))
	{
		x[i] = (*f)(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
