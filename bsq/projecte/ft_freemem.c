/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freemem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:05:37 by aalmela-          #+#    #+#             */
/*   Updated: 2021/11/16 18:58:54 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"

void	ft_freemem(int **matrix)
{
	int i;
	if (matrix != NULL)
	{
		i = 0;
		while (matrix[i] != NULL )
		{
			if (matrix[i] != NULL)
				free(matrix[i]);
			i++;
		}
		free(matrix);
	}
}
