/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:35:45 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/04 22:33:58 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	pos;
	size_t	size;

	if (s1 == NULL && set == NULL)
		return (NULL);
	pos = 0;
	size = ft_strlen(s1);
	if (size != 0)
		size = size -1;
	while (isset(s1[pos], set) == 1)
		pos++;
	while (size > pos && isset(s1[size], set) == 1)
		size--;
	trim = ft_substr(s1, pos, size - pos + 1);
	return (trim);
}
/*
int main()
{
	char str[]= "avvablablav";
	printf("%s\n", ft_strtrim(str, "va"));

	size = ft_strlen(s1) - pos;
	printf("pos %zu\n", pos);
	printf("size %zu\n", size);
	printf("%d\n", isset(s1[size -1], set));

}*/
