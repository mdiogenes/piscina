#ifndef FT_H
# define FT_H

//Constants (line MAX 10)

//Libraries (unistd)
#include <unistd.h>
#include<stdio.h>

//typedef
	typedef struct	s_dic
	{
		int				nb;
		int				power;
		char			*str;
		struct s_dic	*next;
	}					t_dic;

//prototipes
void	ft_putstr(char *str);
void	ft_dictio_read(dictpath, t_dic *my_dict);
int 	ft_nb_process(nb, t_dic *my_dict);
void	ft_memory_clear(t_dic *my_dict);

#endif



