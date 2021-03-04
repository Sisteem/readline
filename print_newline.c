/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_new_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:27:38 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/13 20:27:52 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void	print_newline(void)
{
	wrap_cursor();
	ft_putchar('\n');
	g_rl_state.current_line++;
	g_rl_state.cursor_line_pos = 0;
}
