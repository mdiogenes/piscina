/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:07:33 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/18 12:20:03 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	n;
	int	cont;

	result = 0;
	n = nb / 2;
	cont = 1;
	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (cont < n)
	{
		result = cont * cont;
		if (result == nb)
			return (cont);
		cont++;
	}
	return (0);
}
