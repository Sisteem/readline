/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:01:43 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/15 00:17:03 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	write_char(char c)
{
	t_readline_state *const	rl = &g_rl_state;

	mark_hist_entry_as_dirty();
	dyn_str_insert_chr(rl->lines->array + rl->current_line,
		rl->cursor_line_pos, c);
	ft_putchar(c);
	rl->cursor_line_pos++;
	update_lines();
}
