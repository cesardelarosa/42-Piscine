/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:21:20 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/22 11:03:07 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = 0;
	while (prime == 0)
	{
		if (ft_is_prime(nb) == 1)
			prime = nb;
		nb++;
	}
	return (prime);
}

int	ft_is_prime(int nb)
{
	int	div;
	int	i;

	div = 0;
	if (nb < 2)
		return (0);
	else
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
			if (i > 3)
				i++;
		}
	}
	return (1);
}
