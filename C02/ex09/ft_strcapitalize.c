/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:56:18 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/17 19:08:00 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_islower(char txt);
int	my_isupper(char txt);
int	my_isdigit(char txt);
int	isalphanum(char txt);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || (isalphanum(str[i]) && !(isalphanum(str[i - 1]))))
		{
			if (my_islower(str[i]))
				str[i] += 'A' - 'a';
			i++;
			while (isalphanum(str[i]))
			{
				if (my_isupper(str[i]))
					str[i] -= 'A' - 'a';
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}

int	my_islower(char txt)
{
	if (txt < 'a' || txt > 'z')
		return (0);
	else
		return (1);
}

int	my_isupper(char txt)
{
	if (txt < 'A' || txt > 'Z')
		return (0);
	else
		return (1);
}

int	my_isdigit(char txt)
{
	if (txt < '0' || txt > '9')
		return (0);
	else
		return (1);
}

int	isalphanum(char txt)
{
	if (my_islower(txt))
		return (1);
	else if (my_isupper(txt))
		return (1);
	else if (my_islower(txt))
		return (1);
	else if (my_isdigit(txt))
		return (1);
	else
		return (0);
}
