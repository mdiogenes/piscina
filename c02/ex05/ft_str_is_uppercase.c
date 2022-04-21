/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:33:09 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/05 14:39:01 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	alphabet(char *str);

int	ft_str_is_uppercase(char *str)
{
	while ((*str != '\0') && (alphabet(str)))
		str ++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}

int	alphabet(char *str)
{
	int		y;
	_Bool	trobat;

	y = 65;
	trobat = 0;
	while (y <= 90)
	{
		if (*str == y)
			return (1);
		y ++;
	}
	return (0);
}
