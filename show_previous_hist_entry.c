/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_previous_hist_entry.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 23:54:55 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/16 15:56:16 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	show_previous_hist_entry(void)
{
	if (g_history.current_entry == 0)
		return ;
	if (g_history.current_entry == -1 && g_history.entries->length > 0)
		g_history.current_entry = g_history.entries->length - 1;
	else if ((size_t)g_history.current_entry <= g_history.entries->length &&
			g_history.current_entry > 0)
		g_history.current_entry--;
	print_current_hist_entry();
}
