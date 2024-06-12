/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:32:33 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 05:11:45 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		pos++;
	}
	return (pos);
}
/*
int main()
{
	printf("%zu\n", ft_strlen(""));
	printf("%lu\n", strlen(""));
}*/
