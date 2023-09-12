/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:59:29 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/19 18:08:37 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	lnumber(int nb);

void	ft_putnbr(int nb)
{
	int		l;
	char	digit;

	l = lnumber(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	while (l >= 1 || l <= -1)
	{
		digit = '0' + nb / l;
		nb %= l;
		write(1, &digit, 1);
		l /= 10;
	}
}

int	lnumber(int nb)
{
	int	l;

	l = 1;
	while (nb >= 10 || nb <= -10)
	{
		nb /= 10;
		l *= 10;
	}
	return (l);
}
