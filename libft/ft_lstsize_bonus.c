/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:54:41 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/19 12:54:43 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
//		printf("%d\n", *((int *)lst->content)); 
/*
int main()
{
	int data = 7;
	int data2 = 9;
	t_list test;
	t_list test2;
	test2.content = &data;
	test.content = &data2;
	test.next = &test2;
	test2.next = NULL;
	printf("%d\n", ft_lstsize(&test));
}*/
