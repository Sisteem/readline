/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrap_cursor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:52:54 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/07 18:55:33 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	wrap_cursor(void)
{
	t_readline_state *const	rl = &g_rl_state;

	if ((rl->cursor_line_pos + (rl->current_line == 0 ? rl->prompt_len : 0)) %
			rl->win_cols == 0)
	{
		ft_putchar(' ');
		tputs(tgetstr("le", NULL), 1, ft_putchar);
	}
}
