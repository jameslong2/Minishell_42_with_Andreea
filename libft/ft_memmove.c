/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 08:15:02 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/01 22:37:28 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;

	p1 = (char *)dst;
	p2 = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src && len >= 1)
	{
		while (len > 0)
		{
			*p1 = *p2;
			p1++;
			p2++;
			len--;
		}
	}
	else if (len >= 1)
	{
		while (--len > 0)
			p1[len] = p2[len];
		p1[len] = p2[len];
	}
	return (dst);
}
/*
int main()
{
char *src = "thanks to @apellicc for this test !\r\n";
 	char dst1[0xF0];
 	int size = strlen(src);
 	char *r1 = memmove (dst1, dst1 + 3 , size);
 	char *r2 = ft_memmove(dst1, src, size);
	printf("%s\n%s\n", r1, r2);
*/
/*
	char str1[30] = "viv";
	char str[20] = "hiiii whore";
//	char str1[30] = "viv";
	printf("orig: %s\n", str);
	ft_memmove(str, str1, 5);
	printf("mine: %s\n", str);
	memmove(str, str1, 5);
	printf("corr: %s\n", str);


memmove("", "" - 1, 0);
ft_memmove("", "" - 1, 0);
}*/
