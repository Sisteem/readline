/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynstr_vector_equ.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 02:33:23 by mel-idri          #+#    #+#             */
/*   Updated: 2020/12/16 15:53:04 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline.h"

int	dynstr_vector_equ(t_dynstr_vector *dynstr_vec1,
		t_dynstr_vector *dynstr_vec2)
{
	size_t	i;

	if (dynstr_vec1 == NULL || dynstr_vec2 == NULL)
		return (0);
	if (dynstr_vec1->length != dynstr_vec2->length)
		return (0);
	i = 0;
	while (i < dynstr_vec1->length)
	{
		if (!ft_strequ(dynstr_vec1->array[i].str, dynstr_vec2->array[i].str))
			return (0);
		i++;
	}
	return (1);
}
