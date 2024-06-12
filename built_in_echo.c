/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built_in_echo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 22:03:17 by astoiano          #+#    #+#             */
/*   Updated: 2024/05/28 22:31:38 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //no minishell.h include?
#include "minishell.h"

static int	is_flag(char *check)
{
	int	i;

	i = 2;
	if (check[0] == '-' && check[1] == 'n')
	{
		while (check[i] == 'n')
			i++;
		if (i == ft_strlen(check))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int	main(int argc, char **argv, char **env)
{
	int	flag;
	int	i;
	int	set;

	set = 0;
	i = 1;
	flag = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			if (is_flag(argv[i]) && set == 0)
				flag = 1;
			else
			{
				printf("%s",argv[i]);
				set = 1;
			}
			i++;
		}
	}
	if (flag == 0)
		printf("\n");
}
