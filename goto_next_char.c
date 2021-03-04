/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goto_next_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 02:22:36 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/13 00:37:08 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	goto_next_char(void)
{
	if (g_rl_state.current_line + 1 == g_rl_state.lines->length &&
			g_rl_state.cursor_line_pos ==
				g_rl_state.lines->array[g_rl_state.current_line].len)
		return ;
	else if (g_rl_state.cursor_line_pos ==
				g_rl_state.lines->array[g_rl_state.current_line].len)
	{
		move_cursor_to(g_rl_state.current_line + 1, 0);
	}
	else
		move_cursor_to(g_rl_state.current_line, g_rl_state.cursor_line_pos + 1);
}
