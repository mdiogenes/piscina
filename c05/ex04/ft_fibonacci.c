/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:07:33 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/18 00:55:04 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 2)
		return (1);
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
