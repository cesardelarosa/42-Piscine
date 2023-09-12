/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:28:25 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/19 17:55:56 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nbase(char *base);
int	clear(char *str);
int	ft_sgn(char *str);
int	ft_number(char *str, char *base, int n, int i);

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	i;
	int	sgn;
	int	n;

	n = nbase(base);
	if (n < 2)
		return (0);
	i = clear(str);
	sgn = ft_sgn(str);
	number = ft_number(str, base, n, i);
	number = sgn * number;
	return (number);
}

int	ft_number(char *str, char *base, int n, int i)
{
	int	number;
	int	j;

	number = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				number = number * n + j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (number);
}

int	nbase(char *base)
{
	int	n;
	int	i;

	n = 0;
	while (base[n] != '\0')
	{
		if (base[n] == '+' || base [n] == '-')
			return (0);
		i = 0;
		while (base[i] != '\0')
		{
			if (base[i] == base[n] && i != n)
				return (0);
			i++;
		}
		n++;
	}
	return (n);
}

int	clear(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '+' || str[i] == '-' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_sgn(char *str)
{
	int	sgn;
	int	i;

	sgn = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sgn *= -1;
		i++;
	}
	return (sgn);
}
