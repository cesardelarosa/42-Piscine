/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:21:24 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/22 12:09:18 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	num(int n);

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			num(n1);
			write(1, " ", 1);
			num(n2);
			if (n1 < 98)
			{
				write(1, ", ", 2);
			}	
			n2++;
		}
		n1++;
	}
}

void	num(int n)
{
	char	unit;
	char	ten;

	unit = '0' + n % 10;
	ten = '0' + n / 10;
	write(1, &ten, 1);
	write(1, &unit, 1);
}
