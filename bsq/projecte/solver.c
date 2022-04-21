/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:37:57 by aalmela-          #+#    #+#             */
/*   Updated: 2021/11/17 14:48:59 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/headers.h"

void	sumatori(int **map, int size)
{
	int	**start;
	int	y;
	int	x;

	start = map;
	x = 1;
	while (x <= (size - 1))
	{
		y = 1;
		while (y <= (size - 1))
		{					
			if ((x != 0) && (y != 0) && (map[x][y] != 0))
			{
				map[x][y] += neighbours(x, y, size, map);
			}
			y++;
		}
	x++;
	}																
}

int	neighbours(int x, int y, int size, int **map)
{
	int	i;
	int	j;
	int	minimum;

	i = 1;
	while (i < (size - 1))
	{
		j = 1;
		while (j < (size - 1))
		{
			if ((map[x][y - 1] <= map[x - 1][y - 1])
				&& (map[x][y - 1] <= map[x - 1][y]))
				minimum = map[x][y - 1];
			else if ((map[x - 1][y - 1] < map[x][y - 1])
				&& (map[x - 1][y - 1] <= map[x - 1][y]))
				minimum = map[x - 1][y - 1];
			else if ((map[x - 1][y] < map[x - 1][y - 1])
				&& (map[x - 1][y] < map[x][y - 1]))
				minimum = map[x - 1][y];
			j++;
		}
		i++;
	}
	return (minimum);
}
