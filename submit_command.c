/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   submit_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <mel-idri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 23:08:39 by mel-idri          #+#    #+#             */
/*   Updated: 2021/03/04 16:16:42 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

char		*submit_command(void)
{
	goto_end();
	ft_putchar('\n');
	return (dynstr_vec_to_str(g_rl_state.lines));
}
