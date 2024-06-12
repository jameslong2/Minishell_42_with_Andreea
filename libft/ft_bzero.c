/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:30:15 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 10:43:53 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}
/*
int main()
{
	int pos;
	char s[10] = "hiiii";

	pos= 0;
	ft_bzero(s, 3);
	while (s[pos] == '\0')
	{
		printf("its a zero\n");
		pos++;
	}
	printf("done");
}*/
