/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:07:33 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/18 12:35:24 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	result;
	int	n;

	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (0);
	result = 1;
	n = 2;
	while ((n < nb) && (result != 0))
	{
		result = nb % n;
		n++;
	}
	if (result != 0)
		return (1);
	return (0);
}
