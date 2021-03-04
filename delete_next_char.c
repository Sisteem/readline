/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_next_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 00:29:13 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/14 22:35:09 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	delete_next_char(void)
{
	t_readline_state *const rl = &g_rl_state;

	mark_hist_entry_as_dirty();
	if (rl->current_line == rl->lines->length - 1 &&
			rl->cursor_line_pos == rl->lines->array[rl->lines->length - 1].len)
		return ;
	else if (rl->cursor_line_pos == rl->lines->array[rl->current_line].len)
		merge_lines(rl->current_line, rl->current_line + 1);
	else
		dyn_str_delete_chr(rl->lines->array + rl->current_line,
			rl->cursor_line_pos);
	update_lines();
}
