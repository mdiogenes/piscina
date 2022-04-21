/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:20:22 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/17 15:04:10 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"includes/headers.h"

void	printsquare(char **ptr, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			write(1, &ptr[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
	free(ptr);
}

char	**ft_newtablechar(int size)
{
	int		x;
	int		y;
	char	**tbl;

	tbl = (char **)malloc (size * sizeof(char *));
	if (!tbl)
		return (0);
	x = 0;
	while (x < size)
	{
		tbl[x] = (char *)malloc (size * sizeof (char));
		if (!tbl[x])
			return (NULL);
		y = 0;
		while (y < size)
		{
			tbl[x][y] = 'o';
			y++;
		}
		x++;
	}
	return (tbl);
}

char	**foundsquare(int **map, int bigxy[], int size)
{
	int		x;
	int		y;
	char	**ptr;

	ptr = ft_newtablechar(size);
	if (!ptr)
		return (ptr);
	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			if ((x > (bigxy[1] - bigxy[0]) && (x <= bigxy[1]))
				&& ((y <= bigxy[2]) && (y > (bigxy[2] - bigxy[0]))))
				ptr[x][y] = 'x';
			else
				ptr[x][y] = map[x][y] + '0';
			y++;
		}
		x++;
	}
	printsquare(ptr, size);
	return (ptr);
}

void	biggest_value(int **map, int size)
{
	int	x;
	int	y;
	int	bigxy[3];

	bigxy[0] = 0;
	bigxy[1] = 0;
	bigxy[2] = 0;
	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			if (bigxy[0] < map[x][y + 1])
			{
				bigxy[0] = map[x][y + 1];
				bigxy[1] = x;
				bigxy[2] = (y + 1);
			}
			y++;
		}
		x++;
	}
	if (! foundsquare(map, bigxy, size))
		write(1, "Error MAlloC!", 13);
}
