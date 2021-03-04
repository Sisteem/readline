/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_history_state.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <mel-idri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:33:31 by mel-idri          #+#    #+#             */
/*   Updated: 2021/02/26 08:26:55 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	init_history_state(void)
{
	if (g_history.entries == NULL)
		g_history.entries = (void*)vector_init(sizeof(t_hist_entry), NULL);
	g_history.current_entry = -1;
	g_history.stage = g_rl_state.lines;
}
