/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:01:06 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/02 18:53:18 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_print_combn(int n);
void	recfind(int a[], int valor, int size);
void	throw(int a[], int valor, int x);

void	throw(int a[], int valor, int x)
{
	char	numcar;
	int		num;

	num = 0;
	while (num < valor - 1)
	{
		numcar = a[num] + '0';
		write(1, &numcar, 1);
		num ++;
	}
	numcar = x + '0';
	write (1, &numcar, 1);
	if (a[0] != 10 - valor)
		write(1, ", ", 2);
}

void	recfind(int a[], int valor, int size)
{
	int	x;

	if (valor == size)
		x = 0;
	else
		x = a[valor - size - 1] + 1;
	while (x <= (10 - size))
	{	
		if (size == 1)
		{
			throw(a, valor, x);
		}
		else
		{	
			a[valor - size] = x;
			recfind(a, valor, size - 1);
		}
		x ++;
	}
}

void	ft_print_combn(int n)
{
	int	a[10];
	int	valor;
	int	i;

	valor = n;
	i = 0;
	while (i <= 9)
	{
		a[i] = 0;
		i ++;
	}
	recfind (a, valor, n);
}
