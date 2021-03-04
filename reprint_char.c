/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reprint_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 00:48:44 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/08 12:31:07 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

int	reprint_char(void)
{
	t_readline_state *const	rl = &g_rl_state;
	int						ret;

	ret = ft_putchar(
		rl->lines->array[rl->current_line].str[rl->cursor_line_pos]);
	rl->cursor_line_pos++;
	return (ret);

}
