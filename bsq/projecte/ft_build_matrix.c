/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:52:35 by aalmela-          #+#    #+#             */
/*   Updated: 2021/11/16 17:44:34 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"

int	**cal_m(int **matrix, int read_range, char *rdr, int fs);

int	**build_matrix(char *reader, int file_size, int *size)
{
	int	total_lines;
	int	read_range;
	int	**result;

	total_lines = count_lines(reader);
	result = (int **) malloc(sizeof(int *) * total_lines + 1);
	read_range = 0;
	while (reader[read_range] != '\n')
		read_range++;
	result = cal_m(result, read_range, reader, file_size);
	*size = total_lines;
	return (result);
}

int	count_lines(char *reader)
{
	int	line_counter;

	line_counter = 0;
	while (*reader != '\0')
	{
		if (*reader == '\n')
			line_counter++;
		reader++;
	}
	line_counter--;
	return (line_counter);
}

void	translate(int *matrix_line, int cnt, char c)
{
	if (c == '.')
		matrix_line[cnt] = 1;
	else if (c == 'o')
		matrix_line[cnt] = 0;
}

int	**cal_m(int **matrix, int read_range, char *rdr, int fs)
{
	int	line_counter;
	int	*matrix_line;
	int	cnt;
	int	tot_l;

	tot_l = count_lines(rdr);
	line_counter = 1;
	while (line_counter < (tot_l + 1))
	{
		matrix_line = (int *) malloc (sizeof(int) * tot_l);
		if (!matrix_line)
			return (NULL);
		cnt = 0;
		read_range++;
		while (rdr[read_range] != '\n' && read_range != fs)
		{
			translate(matrix_line, cnt, rdr[read_range]);
			cnt++;
			read_range++;
		}
		matrix[line_counter -1] = matrix_line;
		line_counter++;
	}
	matrix[line_counter] = NULL;
	return (matrix);
}
