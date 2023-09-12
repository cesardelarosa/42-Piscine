/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:21:55 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/22 12:11:10 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		digits(unsigned int nb);
void	number(unsigned int nb, int ndig);

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		write(1, "-", 1);
		n = -nb;
	}
	else
		n = nb;
	number(n, digits(n));
}

int	digits(unsigned int nb)
{
	int	ndig;

	ndig = 0;
	if (nb == 0)
		ndig = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		ndig++;
	}
	return (ndig);
}

void	number(unsigned int nb, int ndig)
{
	unsigned int	dig;
	unsigned int	zeros;
	char			txt;

	zeros = 1;
	while (ndig > 1)
	{
		zeros *= 10;
		ndig--;
	}
	while (zeros >= 1)
	{
		dig = nb / zeros;
		nb -= zeros * dig;
		txt = '0' + dig;
		write(1, &txt, 1);
		zeros /= 10;
	}
}
