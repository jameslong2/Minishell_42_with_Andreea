/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:33:02 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/01 13:44:52 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *)dst;
	p2 = (char *)src;
	if (!p1 && !p2)
		return (dst);
	while (n > 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		n--;
	}
	return (dst);
}
/*
int main()
{
	char s1[10] = "hii";
	char s2[10] = "wel";
	printf("%s\n", ft_memcpy(s1, s2, 4));
	printf("%s\n", memcpy(s1, s2, 4));
}*/
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n > 0)
	{
		*(char *)dst = *(char *)src;
//		(char)dst++;
//		(char)src++;
		n--;
	}
	return (dst);
}

int main()
{
	char s1[60] = "hiii";
	char s2[60] = "waddup";
	printf("%s\n", ft_memcpy(s1, s2, 4));
	printf("%s\n", memcpy(s1, s2, 4));
}*/
