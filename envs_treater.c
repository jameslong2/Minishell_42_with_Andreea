/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   envs_treater.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:53:33 by astoiano          #+#    #+#             */
/*   Updated: 2024/05/29 15:31:45 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**our_envs(char *file, char **init_envs)
{
	static char	**envs = 0;
	int			i;
	static int	init = 0;

	i = 0;
	if (init_envs == 0 && file != 0)
	{
		
		while (envs[i] != 0){
			i++;
		}
			
		if (init != 0)
			free_array(envs, i - 1);
		envs = ft_split(file, '\n');
		free(file);
		if (init == 0)
			init = 1;
	}
	else if (file == 0 && init_envs != 0)
		envs = init_envs;
	return (envs);
}

// para las env, utilizar SIGUSR1 para cargar las nuevas envs
void	cargar_envs(int signal)
{
	int		fd;
	int		count_status[2];
	char	character;
	char	*readbuffer;

	fd = open(ENVS_R, O_RDONLY);
	if (fd < 0)
	{
		return ;
	}
	count_status[1] = read(fd, &character, 1);
	count_status[0] = 0;
	while (count_status[1] > 0)
	{
		count_status[0]++;
		count_status[1] = read(fd, &character, 1);
	}
	close(fd);
	fd = open(ENVS_R, O_RDONLY);
	readbuffer = (char *)malloc(count_status[0] + 1);
	read(fd, readbuffer, count_status[0]);
	readbuffer[count_status[0]] = '\0';
	our_envs(readbuffer, 0);
	close(fd);
	delete_file(our_envs(0, 0), ENVS_R);
}
