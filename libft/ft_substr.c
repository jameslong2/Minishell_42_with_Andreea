/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:41:46 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 22:41:49 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(len + 1 * sizeof(char));
	if (sub == NULL)
		return (NULL);
	if (start <= ft_strlen(s))
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
int main()
{
	char *test;
	char str[]= "hola";//"hello i wuv uwu";
	printf("%s\n", ft_substr(str, 2, 3));

//	int len = 7;
	test = ft_substr(str, 13, 7);
	while(*test != '\0')
	{
		printf("%p\n", test);
		test++;
	}
}*/
