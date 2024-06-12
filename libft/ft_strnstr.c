/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:33:54 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/29 20:33:59 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_str(const char *haystack, const char *needle, size_t len, int pos)
{
	while (*needle != '\0' && haystack[pos] != '\0'
		&& *needle == haystack[pos] && len > 0)
	{
		needle++;
		pos++;
		len--;
	}
	if (*needle == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		pos;
	char	*str;

	pos = 0;
	str = (char *)haystack;
	if (*needle == '\0')
	{
		return (str);
	}
	while (haystack[pos] != '\0' && len > 0)
	{
		if (haystack[pos] == *needle)
		{
			if (check_str(haystack, needle, len, pos) == 1)
			{
				return (str + pos);
			}
		}
		pos++;
		len--;
	}
	return (NULL);
}
/*
int main()
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 10));
}*/
