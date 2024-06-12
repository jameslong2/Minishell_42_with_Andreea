/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:33:44 by astoiano          #+#    #+#             */
/*   Updated: 2023/09/29 20:33:47 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;

	if (n == 0)
		return (0);
	n--;
	while ((*s1 != '\0' || *s2 != '\0') && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	res = (unsigned char)*s1 - (unsigned char)*s2;
	return (res);
}
/*
int main()
{
	printf("%d\n", ft_strncmp("abcd", "abcd", 4));
	printf("%d\n", strncmp("abcd", "abcd", 4));

}*/
