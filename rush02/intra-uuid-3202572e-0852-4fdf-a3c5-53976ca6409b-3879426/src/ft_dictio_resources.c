/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictio_read.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/14 23:42:26 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_dictio_len(char *dictio)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	while (next)
	{
		if (dictio != 0 && dictio[i])
			i++;
		else
			next = 0;
	}
	return (i);
}

char	*ft_dictio_parsenb(char *str_line)
{
	char	*nb;
	int		i;

	nb = malloc(sizeof(char));
	*nb = '\0';
	i = -1;
	while (str_line[++i] != ':')
		nb = ft_tool_stradd(nb, str_line[i]);
	return (nb);
}

char	*ft_dictio_parsestr(char *str_line)
{
	char	*str;
	int		i;

	i = 1;
	while (str_line[i - 1] != ':')
		i++;
	while (str_line[i - 1] != ' ')
		i++;
	str = malloc(sizeof(char));
	*str = '\0';
	while (str_line[i] != '\0')
	{
		str = ft_tool_stradd(str, str_line[i]);
		i++;
	}
	return (str);
}

int	ft_dictio_parseline(char *dictio, char *str_line)
{
	char	*nb;
	char	*str;

	nb = 0;
	str = 0;
	nb = ft_dictio_parsenb(str_line);
	str = ft_dictio_parsestr(str_line);
	if (nb == 0 || str == 0)
		return (0);
	dictio = ft_dictio_add(dictio, nb, str);
	if (dictio == 0)
		return (1);
	return (0);
}

char	*ft_dictio_add(char *dictio, char *nb, char *str)
{
	int		i;
	int		len;
	char	c;

	len = ft_tool_strsize(nb);
	i = -1;
	while (++i < len)
		dictio = ft_tool_stradd(dictio, nb[i]);
	c = ':';
	dictio = ft_tool_stradd(dictio, c);
	len = ft_tool_strsize(str);
	i = -1;
	while (++i < len)
		dictio = ft_tool_stradd(dictio, str[i]);
	c = ';';
	dictio = ft_tool_stradd(dictio, c);
	return (dictio);
}
