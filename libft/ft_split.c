/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:11:09 by astoiano          #+#    #+#             */
/*   Updated: 2023/10/03 22:11:11 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static char	**free_array(char **arr, int run)
{
	while (run > 0)
	{
		free(arr[run -1]);
		run--;
	}
	free(arr);
	return (NULL);
}

static size_t	count_strings(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static int	find_start(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s == c)
	{
		count++;
		s++;
	}
	return (count);
}

static int	find_limit(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s == c)
	{
		count++;
		s++;
	}
	while (*s != '\0' && *s != c)
	{
		s++;
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		lim;
	int		prevlim;
	int		run;
	int		count;

	lim = 0;
	prevlim = 0;
	run = 0;
	count = count_strings(s, c);
	arr = malloc((count_strings(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (count > 0)
	{
		prevlim = lim + find_start(&s[lim], c);
		lim = lim + find_limit(&s[lim], c);
		arr[run] = ft_substr(s, prevlim, lim - prevlim);
		if (!arr[run])
			return (free_array(arr, run));
		run++;
		count--;
	}
	arr[run] = 0;
	return (arr);
}
/*
int main()
{
	char **res;
	int pos = 0;
	//char str[]="split  ||this|for|me|||||!|"; //"|hii|";
	char str[] = "hello!zzzzzzzz";
	res = ft_split("hello!zzzzzzzz",'z');
	printf("Array: \n\n");
	while (res[pos] != 0)
	{
		printf("%s\n", res[pos]);
		pos++;
	}
//	printf("\n");
	printf("find limit: %d\n", find_limit(str, 'z'));
	printf("count string: %zu\n", count_strings(str, 'z'));
	printf("find start: %d\n", find_start(str, 'z'));
}*/
