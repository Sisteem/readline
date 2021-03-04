/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_next_hist_entry.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:23:54 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/16 15:54:57 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	show_next_hist_entry(void)
{
	if (g_history.current_entry == -1)
		return ;
	if ((size_t)g_history.current_entry + 1 == g_history.entries->length)
		g_history.current_entry = -1;
	else if ((size_t)g_history.current_entry + 1 < g_history.entries->length)
		g_history.current_entry++;
	print_current_hist_entry();
}
