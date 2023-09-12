/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:42:30 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/24 16:51:45 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	n = max - min;
	*range = (int *)malloc(n * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < n)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (n);
}
