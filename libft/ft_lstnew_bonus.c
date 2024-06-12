/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:53:58 by astoiano          #+#    #+#             */
/*   Updated: 2024/01/13 22:23:24 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = NULL;
	new_node = (t_list *) malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
//	t_list.content = content;
//	t_list.next = NULL;
/*	t_list *head = NULL;
	head = (t_list *) malloc(sizeof(t_list));
	if (head = NULL)
	{
		return (1);
	}
	head->(int)*content = 2;
	head -> next = NULL;*/
