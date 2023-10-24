/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:25:38 by aortigos          #+#    #+#             */
/*   Updated: 2023/10/24 18:15:50 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*new;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	x = NULL;
	while (lst)
	{
		set = f(lst->content);
		new = ft_lstnew(set);
		if (!new)
		{
			del(set);
			ft_lstclear(&x, del);
			return (NULL);
		}
		ft_lstadd_back(&x, new);
		lst = lst->next;
	}
	return (x);
}
