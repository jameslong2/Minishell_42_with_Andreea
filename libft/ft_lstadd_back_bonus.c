/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:44:30 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/19 12:44:34 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*test;

	if (!new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		test = ft_lstlast(*lst);
		(*test).next = new;
	}
}
//	lst->next = new; if you want to work correctly with pointer
//
//	(*test) takes the value of the pointer, so the node
//	'->' knows to access the node inside a pointer 
//	automatically (thats why its used)
