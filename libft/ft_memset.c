/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:32:44 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/29 20:32:46 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	ch;

	str = (char *)b;
	ch = (unsigned char)c;
	while (len > 0)
	{
		*str = ch;
		str++;
		len--;
	}
	return (b);
}
/*
int main()
{
	char str[20] = "hello i hate";
	printf("%s\n", ft_memset(str, 111, 7));
	printf("%s\n", memset(str, 111, 7));
}*/
