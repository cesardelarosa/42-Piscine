/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:02:28 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/18 17:38:58 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	nbase(char *base);
int	lnumber(int nbrl, int n);

void	ft_putnbr_base(int nbr, char *base)
{
	int		n;
	int		l;

	n = nbase(base);
	if (n < 2)
		return ;
	l = lnumber(nbr, n);
	if (nbr < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	while (l >= 1 || l <= -1)
	{
		write(1, &base[nbr / l], 1);
		nbr = nbr % l;
		l /= n;
	}
}

int	nbase(char *base)
{
	int	n;
	int	i;

	n = 0;
	while (base[n] != '\0')
	{
		if (base[n] == '+' || base [n] == '-')
			return (0);
		i = 0;
		while (base[i] != '\0')
		{
			if (base[i] == base[n] && i != n)
				return (0);
			i++;
		}
		n++;
	}
	return (n);
}

int	lnumber(int nbrl, int n)
{
	int	l;

	l = 1;
	while (nbrl >= n || nbrl <= -n)
	{
		nbrl /= n;
		l *= n;
	}
	return (l);
}
