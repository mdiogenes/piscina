/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 09:35:19 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/03 11:28:39 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb2(void);
void	throw(char a, char b, char c, char d);
void	hundred(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	char	d1;
	char	un1;
	char	d2;
	char	un2;

	d1 = '0';
	un1 = '0';
	d2 = '0';
	un2 = '1';
	hundred(d1, un1, d2, un2);
}

void	hundred(char a, char b, char c, char d)

{
	while (a <= '9')
	{
		while (b <= '9')
		{
			c = a;
			d = b + 1;
			while (c <= '9')
			{
				while (d <= '9')
				{
					throw(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
		}
		a++;
		b = '0';
	}
}

void	throw(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}
