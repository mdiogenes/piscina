/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:37:57 by aalmela-          #+#    #+#             */
/*   Updated: 2021/11/17 20:17:34 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"

int	main(int argc, char **argv)
{
	char	reader[1024];
	int		fd;
	int		chars_read;
	int		**matrix;
	int		executions;
	int *size;
	int m_size;

	if (argc < 1)
		return (-1);
	executions = 1;
	size = &m_size;
	while (executions < argc)
	{	
		fd = open (argv[executions], O_RDONLY);
		if (fd <= 0)
		{
			executions++;
			continue ;
		}
		chars_read = read (fd, reader, 1024);
		close (fd);
		matrix = build_matrix (reader, chars_read, size);
		sumatori(matrix, *size);
		biggest_value(matrix, *size);
		if (matrix == NULL)
		{
			executions++;
			continue ;
		}
		free(matrix);
		executions++;
	}
	return (0);
}
