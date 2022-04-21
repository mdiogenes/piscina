/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:33:48 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/17 15:36:12 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char num[10]);

void	ft_putnbr(int nb)
{
	char	num[10];
	int		i;

	i = 9;
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		num[i] = -(nb % 10) + '0';
		nb = -(nb / 10);
		i--;
	}
	while (i >= 0)
	{
		num[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	ft_putchar(num);
}

void	ft_putchar(char num[10])
{
	int		i;
	_Bool	trobat;

	i = 0;
	trobat = 0;
	while (i < 10)
	{
		if (num[i] != '0' || trobat)
		{
			write(1, &num[i], 1);
			trobat = 1;
		}
		i++;
	}
}
