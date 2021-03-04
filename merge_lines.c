/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 00:30:00 by mel-idri          #+#    #+#             */
/*   Updated: 2020/11/30 20:26:14 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

void merge_lines(int dest_line, int src_line)
{
	t_dynstr_vector *const	lines = g_rl_state.lines;

	dyn_str_append(&lines->array[dest_line], lines->array[src_line].str);
	vector_remove((t_vector*)lines, src_line);
}
