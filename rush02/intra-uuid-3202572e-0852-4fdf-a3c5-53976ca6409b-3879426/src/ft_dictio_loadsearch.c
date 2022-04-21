/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictio_search.                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/13 15:10:43 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char *ft_dictio_extract(char *str_line, char *nb, char *str)
{
	char	*my_nb;
	int     found;
    int     i;
    char    *more;

    found = 1;
	my_nb = 0;
	str = 0;
	my_nb = ft_dictio_parsenb(str_line);
	str = ft_dictio_parsestr(str_line);
	if (nb == 0 || str == 0)
		return (0);
	i = -1;
	
	found = (ft_strcmp(nb, my_nb) == 0);
    more = nb;
	if (found)
	    return (str);
	else
	    return (0);
}

char *ft_dictio_search(char *nb, char *str,char *dictio)
{
	int		len;
	char	c;
	char	*str_line;
	int     i;
	int     found;

    i = 0;
    found = 0;
    str_line = malloc(sizeof(char));
	*str_line = '\0';
	len = (dictio[i] != '\0');
	while (len != 0 && !found)
	{
	    c = dictio[i];
		if (c != ';')
			str_line = ft_tool_stradd(str_line, dictio[i]);
		else
		{
			str = ft_dictio_extract(str_line, nb, str);
            found = (str != 0);
			free(str_line);
			str_line = malloc(sizeof(char));
			*str_line = '\0';
		}
		len = (dictio[++i] != '\0');
	}
	free(str_line);
	return (str);
}

char *ft_dictio_load(char *dictio_file)
{
	int		file;
	int		len;
	char	c;
	char	*str_line;

    file = open(dictio_file, O_RDONLY);
	if (file == -1)
		return (0);
	str_line = malloc(sizeof(char));
	*str_line = '\0';
	len = read(file, &c, 1);
	while (len != 0)
	{
		if (c != '\n')
			str_line = ft_tool_stradd(str_line, c);
		else
		{
		    c = ';';
		    str_line = ft_tool_stradd(str_line, c);
		}
		len = read(file, &c, 1);
	}
	return (str_line);
}
