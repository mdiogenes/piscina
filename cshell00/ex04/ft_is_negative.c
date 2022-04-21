/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:06:07 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/03 09:16:39 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	c;

	c = 'A';
	if (n < 0)
		c = 'N';
	else
		c = 'P';
	write(1, &c, 1);
}	
