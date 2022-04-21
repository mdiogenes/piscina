/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:00:25 by msoler-e          #+#    #+#             */
/*   Updated: 2021/10/30 20:00:28 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	num;
	char	num2;
	char	num3;

	num = '0';
	while (num < '8')
	{
		num2 = num + 1;
		while (num2 < '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				write(1, &num, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (!(num == '7' && num2 == '8' && num3 == '9'))
					write(1, ", ", 2);
				num3++;
			}
			num2++;
		}
		num++;
	}
}
