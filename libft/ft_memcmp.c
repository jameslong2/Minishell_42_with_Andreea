/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 05:12:13 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 06:50:36 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*str1 == *str2 && --n > 0)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
/*
int main()
{
	char str1[20] = "abcde";
	char str2[20] = "abcdx";
	printf("%d\n", ft_memcmp(str1, str2, 4));
	printf("%d\n", memcmp(str1, str2, 4));
}*/
