/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:43:43 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/17 16:52:02 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	longstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	comprobarbase(char *base)
{
	int		i;
	int		j;

	if (longstr(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	negative(int nbr)
{
	int	temp;

	if (nbr < 0)
	{
		temp = nbr;
		temp = -temp;
		write(1, "-", 1);
	}
	else
		temp = nbr;
	return (temp);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		basediv;
	int		i;
	char	result[32];

	if (!comprobarbase(base))
		return ;
	basediv = longstr(base);
	num = negative(nbr);
	i = 0;
	while (num > 0)
	{
		result[i] = base[num % basediv];
		num /= basediv;
		i++;
	}
	while (--i >= 0)
		write(1, &result[i], 1);
}
