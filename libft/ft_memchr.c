/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 05:10:03 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 05:10:09 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*str == ch)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "hula";
	printf("%s\n", (char *)ft_memchr(str, 'l', 2));
	printf("%s\n", (char *)memchr(str, 'l', 2));
}*/
