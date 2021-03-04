/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <mel-idri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:46:42 by mel-idri          #+#    #+#             */
/*   Updated: 2021/03/03 22:34:36 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	exit_error(char *msg)
{ 
	ft_putendl_fd(msg, 2);
	if (g_orig_attrs.is_initialized)
		tcsetattr(STDIN_FD, TCSANOW, &g_orig_attrs.attrs);
	exit(1);
}
