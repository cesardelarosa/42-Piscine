/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:37:37 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/25 21:09:15 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*vect;
	int	n;
	int	i;

	if (max <= min)
		return (NULL);
	n = max - min;
	vect = (int *)malloc(n * sizeof(int));
	if (vect == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		vect[i] = min + i;
		i++;
	}
	return (vect);
}
