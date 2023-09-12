/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:12:39 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/20 22:04:15 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*t;

	l = 0;
	while (src[l] != '\0')
		l++;
	t = (char *)malloc(l + 1);
	i = 0;
	while (i < l)
	{
		t[i] = src[i];
		i++;
	}
	t[l] = '\0';
	return (t);
}
