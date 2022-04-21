/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:26:12 by msoler-e          #+#    #+#             */
/*   Updated: 2021/10/29 13:26:14 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int		x;	
	char	c;

	x = 1;
	c = 'z';
	while (x != 27)
	{
		write(1, &c, 1);
		c--;
		x++;
	}
}
