/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:37:19 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/03 09:13:44 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int		x;	
	char	c;

	c = 'a';
	x = 26;
	while (x != 0)
	{
		write(1, &c, 1);
		c ++;
		x --;
	}
}
