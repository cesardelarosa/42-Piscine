/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:57:00 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/19 08:51:07 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	n = nb;
	i = 1;
	while (i < n)
	{
		nb *= i;
		i++;
	}
	return (nb);
}
