/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:29:43 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/19 12:46:22 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save_nxt;
	t_list	*temp;

	save_nxt = *lst;
	temp = *lst;
	if (*lst == NULL)
		return ;
	while (temp->next != NULL)
	{
		(*del)(temp->content);
		save_nxt = temp->next;
		free(temp);
		temp = save_nxt;
	}
	if (temp->next == NULL)
	{
		(*del)(temp->content);
		free(temp);
	}
	*lst = NULL;
}
