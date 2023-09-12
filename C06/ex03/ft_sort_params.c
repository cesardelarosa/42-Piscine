/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:58:32 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/20 12:59:45 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printm(int argc, char **argv);
char	**order(int argc, char **argv);
char	**swapm(char **argv, int min, int j);

int	main(int argc, char **argv)
{
	printm(argc, order(argc, argv));
	return (0);
}

void	printm(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

char	**order(int argc, char **argv)
{
	int	min;
	int	i;
	int	j;
	int	k;

	j = 1;
	while (j < argc)
	{
		i = j;
		min = j;
		while (i < argc)
		{
			k = 0;
			while (argv[i][k] == argv[j][k] && argv[i][k] != '\0')
				k++;
			if (argv[min][k] > argv[i][k])
				min = i;
			i++;
		}
		argv = swapm(argv, min, j);
		j++;
	}
	return (argv);
}

char	**swapm(char **argv, int min, int j)
{
	char	*mem;

	mem = argv[min];
	argv[min] = argv[j];
	argv[j] = mem;
	return (argv);
}
