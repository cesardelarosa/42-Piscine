/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:32:23 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/27 17:47:44 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*run(char *str, char **strs, char *sep, int size)
{
	char	*memstr;
	int		i;

	i = 0;
	memstr = (char *)malloc(sizeof(char));
	memstr[0] = '\0';
	while (i < size)
	{
		if (i + 1 < size)
			str = (char *)malloc((ft_strlen(sep) + ft_strlen(strs[i])
						+ ft_strlen(memstr)) * sizeof(char));
		else
			str = (char *)malloc(ft_strlen(strs[i]
						+ ft_strlen(memstr)) * sizeof(char));
		strcpy(str, memstr);
		strcat(str, strs[i]);
		if (i + 1 < size)
			strcat(str, sep);
		memstr = (char *)malloc(ft_strlen(str) * sizeof(char));
		strcpy(memstr, str);
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	str[0] = '\0';
	return (run(str, strs, sep, size));
}
