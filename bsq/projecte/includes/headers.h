#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

#include <string.h>
#include <stdio.h>

int	**build_matrix(char *reader, int file_size, int *size);
int	count_lines(char *reader);
void	ft_print_matrix(int	**matrix, int size);
void	ft_freemem(int **matrix);
void	sumatori(int **map, int size);
int	neighbours(int x, int y, int strlenmapa, int **map);
void	printsquare(char **ptr, int size);
char	**foundsquare(int **map, int bigxy[], int size);
void	biggest_value(int **map, int size); 

#endif
