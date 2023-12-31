/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:38:40 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/08 22:51:14 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		l;
	char	*ptr;

	ptr = str;
	l = 0;
	while (*ptr != '\0')
	{
		l++;
		ptr++;
	}
	write(1, str, l);
}
