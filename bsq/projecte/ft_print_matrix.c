/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:35:18 by aalmela-          #+#    #+#             */
/*   Updated: 2021/11/17 10:01:12 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"

void	ft_print_matrix(int **matrix, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			printf ("%d ", matrix[i][j]);
			j++;
		}
		i++;
		j = 0;
		printf("\n");
	}
}
