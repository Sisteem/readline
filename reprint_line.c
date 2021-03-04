/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reprint_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 20:03:29 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/07 20:31:36 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	reprint_line(void)
{
	t_readline_state *const rl = &g_rl_state;

	rl->cursor_line_pos += ft_putstr(
		rl->lines->array[rl->current_line].str + rl->cursor_line_pos);
}
