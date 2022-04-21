/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictio_manager.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/13 15:10:43 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_dictio_has_nb(char *dictio, char *nb)
{
	char *str;
	
	str = 0;
	str = ft_dictio_get_nb(dictio, nb);
	
	if (str == 0)
	    return (0);
	else
	    return (1);
}

char	*ft_dictio_get_nb(char *dictio, char *nb)
{
	char *str;
	
	str = 0;
	str = ft_dictio_search(nb, str, dictio);
	
	if (str == 0)
	    return (0);
	else
	    return (str);
}

int	ft_dictio_has_power(char *dictio, int i)
{
	char *str;
	
	str = 0;
	str = ft_dictio_get_power(dictio, i);
	
	if (str == 0)
	    return (0);
	else
	    return (1);
}

char	*ft_dictio_get_power(char *dictio, int i)
{
	char *str;
	char *nb;
	int     j;
	char    c;
	
	c = '0';
	nb = "1";
	while (i-- > 0)
	{
	    j = 3;
	    while (j-- > 0)
	        nb = ft_tool_stradd(nb, c);
	}
	
	str = 0;
	str = ft_dictio_search(nb, str, dictio);
	
	if (str == 0)
	    return (0);
	else
	    return (str);
}


