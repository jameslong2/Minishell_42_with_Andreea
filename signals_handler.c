/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:49:25 by astoiano          #+#    #+#             */
/*   Updated: 2024/06/10 17:46:34 by jaucarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	default_sig(int sig)
{
	return ;
}

void	ctrl_c_handler_parent(int sig)
{
	printf("\n");
	rl_on_new_line();
	rl_redisplay();
	status_exit(1,1);
}

void	ctrl_c_handler(int sig)
{
	status_exit(1,1);
	exit(0);
}

void	ctrl_slash_handler(int sig)
{
	rl_on_new_line();
	rl_replace_line("\0", 0);
	rl_redisplay();
	return ;
}
