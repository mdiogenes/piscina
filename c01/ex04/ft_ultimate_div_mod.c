/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:22:15 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/03 17:52:46 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a;
	temp2 = *b;
	*a = temp / temp2;
	*b = temp % temp2;
}
