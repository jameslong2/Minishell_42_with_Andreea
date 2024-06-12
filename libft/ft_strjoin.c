/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:07:48 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/04 22:05:52 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		size;
	int		len;

	size = ft_strlen(s1);
	len = size + ft_strlen(s2);
	res = (char *)malloc(len + 1 * sizeof(char));
	if (res == NULL)
		return (NULL);
	if ((ft_strlcpy(res, s1, size + 1) == (size_t)size)
		&& (ft_strlcat(res, s2, len + 1) == (size_t)len))
	{
		return (res);
	}
	return (NULL);
}
/*
int main()
{
	char str1[] = "hello ";
	char str2[] = "i am horse";
	printf("%s\n", ft_strjoin(str1, str2));
}*/
