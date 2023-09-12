/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvillago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:55:33 by fvillago          #+#    #+#             */
/*   Updated: 2023/07/09 22:05:26 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	decide(int x, int y, int xmax, int ymax);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			decide(j + 1, i + 1, x, y);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}

void	decide(int x, int y, int xmax, int ymax)
{
	if (x > 1 && x < xmax && y > 1 && y < ymax)
	{
		ft_putchar(' ');
	}
	else if ((x > 1 && x < xmax) || (y > 1 && y < ymax))
	{
		ft_putchar('B');
	}
	else if (y == 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('C');
	}
}
