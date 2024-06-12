/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 01:43:08 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 01:43:31 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	n;

	n = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	len = ft_strlen(dst) + ft_strlen(src);
	dstsize--;
	while (*dst != '\0')
	{
		dst++;
		n++;
	}
	while (*src != '\0' && n < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		n++;
	}
	*dst = '\0';
	return (len);
}
/*
int main()
{
	char s1[20] = "hi123";
	char s2[20] = "waddup123";
	printf("%zu\n", ft_strlcat(s1, s2, 1));
	printf("%s\n", s1);
//	printf("%zu\n", strlcat(s1, s2, 1));
//	printf("%s\n", s1);
}*/
