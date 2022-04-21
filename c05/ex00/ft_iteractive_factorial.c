/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:29:17 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/18 11:29:26 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	y;
	int	fact;

	y = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (y <= nb)
	{
		fact = fact * y;
		y = y + 1;
	}	
	return (fact);
}
