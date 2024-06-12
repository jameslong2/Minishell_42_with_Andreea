/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:39:22 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 05:11:22 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	n = 0;
	if (dstsize > 0)
	{
		while (*src != '\0' && n < dstsize - 1)
		{
			*dst = *src;
			dst++;
			src++;
			n++;
		}
		*dst = '\0';
	}
	if (*src != '\0')
		n = n + ft_strlen(src);
	return (n);
}
/*
int main()
{
	char s1[50]="hii";
	char s2[50]="hello";
	printf("%lu\n", ft_strlcpy(s1, s2, 0));
	printf("%s\n", s1);
	printf("%lu\n", strlcpy(s1, s2, 0));
	printf("%s\n", s1);
}*/
