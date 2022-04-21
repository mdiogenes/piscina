/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:13:00 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/04 16:51:53 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	temp;

	x = 0;
	while (x <= (size / 2) - 1)
	{
		temp = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = temp;
		x ++;
	}
}
