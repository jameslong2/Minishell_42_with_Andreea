/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:41:26 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/30 22:41:31 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(s1);
	dup = (char *)malloc(size + 1 * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*dup = *s1;
		dup++;
		s1++;
	}
	*dup = '\0';
	return (dup - size);
}
/*
int main()
{
	char *str = "hello i am horse";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}
*/
