/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resources.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/14 23:34:10 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_tool_strsize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_tool_extendstr(char *str)
{
	char	*more;
	int		i;
	int		len;

	len = ft_tool_strsize(str);
	more = malloc(sizeof(char) * (len + 2));
	i = -1;
	while (++i < len)
		more[i] = str[i];
	free(str);
	return (more);
}

char	*ft_tool_stradd(char *str, char c)
{
	char	*more_add;
	int		i;

	i = ft_tool_strsize(str);
	more_add = ft_tool_extendstr(str);
	more_add[i] = c;
	more_add[i + 1] = '\0';
	return (more_add);
}
