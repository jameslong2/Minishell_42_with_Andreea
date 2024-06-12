/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:08:55 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 23:01:06 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			pos = (char *)s;
		s++;
	}
	if ((char)c == '\0')
	{
		pos = (char *)s;
		return (pos);
	}
	return (pos);
}
/*
int main()
{
	char str[] = "hello whore  ";
	printf("%s\n", ft_strrchr(str,'b'));
	printf("%s\n", strrchr(str,'b'));
}*/
/*
char *ft_strrchr(const char *s, int c)
{
	int 	len;
	int		pos;
	char	*str;
	
	len = 0;
	pos = 0;
	str = (char *)s;
	if (c == '\0')
	{
		while (*str == '\0')
		{
			str++;
			len++;
		}
		printf("")
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == c)
		{
			pos = len;
		}
		str++;
		len++;
	}
	if (pos = 0)
	{
		return (NULL);
	}
	return (str + pos);
}*/
/*
int main()
{
	printf("%s\n", ft_strrchr("hello loser", 'l'));
}*/
