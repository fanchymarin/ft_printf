/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:44:38 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/04/01 14:18:38 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int n, int *nbrlen)
{
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		*nbrlen = 11;
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write (1, "-", 1);
		(*nbrlen)++;
	}
	if (n >= 10)
	{
		ft_printnbr(n / 10, nbrlen);
		ft_printnbr(n % 10, nbrlen);
	}
	else
	{
		n += 48;
		write (1, &n, 1);
		(*nbrlen)++;
	}
}
