/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:42:03 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/01 13:31:53 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*
int main()
{
	int cnt = 5;
	char *proofp;
	char *proofo;

	char *Cptr;
	Cptr = (char *)ft_calloc(cnt, sizeof(char));
	printf("Cptr %s\n", Cptr);

	char *Corig;
	Corig = (char *)calloc(cnt, sizeof(char));
	printf("Corig %s\n", Corig);

	proofp = Cptr + cnt + 3;
	*proofp = 'H';
	printf("proofp %c%p\n", *proofp, &proofp);
	proofo = Corig + cnt + 3;
	*proofo = 'H';
	printf("proofo %c%p\n", *proofo, &proofo);
*/
/*
	while (cnt + 5 >= 0)
	{
		printf("%d\n", cnt);
		if (*Cptr == '\0')
			printf("ptr zero %d%p\n", cnt, &Cptr);
		Cptr++;
		cnt--;
	}
	while (cnt + 5 >= 0)
	{
		if (*Corig == '\0')
			printf("orig zero %d%p\n", cnt, &Cptr);
		Corig++;
		cnt--;
	}
}*/
