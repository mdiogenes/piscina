/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/13 16:36:52 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

//prototipes
int		ft_arg_check(int argc, char **argv, char **nb, char **dictio_file);
void	ft_putstr(char *str);
int		ft_nb_check(char *nb);
//int		ft_dictio_parse(char  dictio, char *str_line);
int		ft_nb_process(char *nb, char *dictio);
int		ft_tool_strsize(char *str);
char	*ft_tool_extendstr(char *str);
char	*ft_tool_stradd(char *str, char c);
char    *ft_dictio_load(char *dictio_file);
int		ft_dictio_parseline(char *dictio, char *str_line);
char	*ft_dictio_parsestr(char *str_line);
char    *ft_dictio_parsenb(char *str_line);
int		ft_dictio_has_nb(char *dictio, char *nb);
char	*ft_dictio_get_nb(char *dictio, char *nb);
int		ft_dictio_has_power(char *dictio, int i);
char	*ft_dictio_get_power(char *dictio, int i);
char	*ft_dictio_add(char *dictio, char *nb, char *str);
char    *ft_dictio_search(char *nb, char *str, char *dictio);
int     ft_memory_clear(char *dictio);

#endif
