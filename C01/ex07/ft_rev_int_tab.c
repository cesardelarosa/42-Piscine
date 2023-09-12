/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revv_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:52:27 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/09 21:09:59 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	mem;

	i = 0;
	while (i < size / 2)
	{
		mem = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = mem;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5] = { 2, 3, 4, 5, 6};
	int i = 0;
	int l = sizeof(tab) / sizeof(tab[0]);
	while (i < l)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab,l);
	i = 0;
	printf("\n");
    while (i < l)
    {
        printf("%d ", tab[i] > 2);
        i++;
    }
	return (0);
}*/
