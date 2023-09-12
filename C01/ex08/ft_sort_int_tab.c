/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:44:43 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/09 21:07:03 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	mem;
	int	min;
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i = j;
		min = j;
		while (i < size)
		{
			if (tab[min] > tab[i])
			{
				min = i;
			}
			i++;
		}
		mem = tab[min];
		tab[min] = tab[j];
		tab[j] = mem;
		j++;
	}
}
/*
int	main(void)
{
	int	tab[5] = { 90, 5, 4, 15, 8};
	int i = 0;
	int l = sizeof(tab) / sizeof(tab[0]);
	while (i < l)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab,l);
	i = 0;
	printf("\n");
    while (i < l)
    {
        printf("%d ", tab[i]);
        i++;
    }
	return (0);
}*/
