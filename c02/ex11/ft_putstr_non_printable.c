/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:33:09 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/12 14:01:51 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int		alphabet(char *str);

void	hexadecimal( unsigned char str)
{
	int	temp;
	int	first;
	int	sec;

	temp = str;
	first = temp % 16;
	sec = temp / 16;
	if (first < 10)
		first = first + '0';
	else
		first = first + 'a' - 10;
	if (sec < 10)
		sec = sec + '0';
	else
		sec = sec + 'a' - 10 ;
	write(1, "\\", 1);
	write(1, &first, 1);
	write(1, &sec, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	alf;

	while (*str != '\0')
	{
		alf = alphabet(str);
		if (alf == 0)
			hexadecimal(*str);
		else
			write(1, str, 1);
		str ++;
	}
}

int	alphabet(char *str)
{	
	int		x;

	x = 32;
	while (x <= 126)
	{
		if (x == *str)
			return (1);
		x ++;
	}
	return (0);
}
