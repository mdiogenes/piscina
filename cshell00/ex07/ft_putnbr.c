/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:33:48 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/03 11:20:32 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putnbr(int nb);
void	throw(int nb);

void	throw(int n)
{	
	char	un;

	if (n > 10)
		throw(n / 10);
	un = n % 10 + '0';
	write (1, &un, 1);
}

void	ft_putnbr(int nb)
{
	char	last_digit;

	if (nb < 0)
	{
		write (1, "-", 1);
		last_digit = (nb % 10) * -1 + '0';
		nb = (nb / 10) * -1;
		throw(nb);
		write (1, &last_digit, 1);
	}
	else
		throw(nb);
}
