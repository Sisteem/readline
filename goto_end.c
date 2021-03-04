/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goto_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:32:18 by mel-idri          #+#    #+#             */
/*   Updated: 2020/11/30 20:26:14 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	goto_end(void)
{
	move_cursor_to(g_rl_state.lines->length - 1,
		g_rl_state.lines->array[g_rl_state.lines->length - 1].len);
}
