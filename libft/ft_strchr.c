/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:33:33 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/01 05:03:47 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		len;
	char	*str;

	len = 0;
	str = (char *)s;
	while ((*s != '\0') && (*s != (char)c))
	{
		s++;
		len++;
	}
	if ((char)c == '\0')
		return (str + len);
	if (*s == '\0')
		return (NULL);
	return (str + len);
}
/*
int main()
{
	printf("%s\n", ft_strchr("wwwwhat is up", 't'));
}*/
