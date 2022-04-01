/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:51:17 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/04/01 14:18:42 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpt(unsigned long n, const char ph, int *sum)
{
	write (1, "0x", 2);
	*sum += 2;
	return (ft_printhex(n, ph, sum));
}
