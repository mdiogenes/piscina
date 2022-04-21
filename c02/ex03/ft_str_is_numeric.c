/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:33:09 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/05 13:45:32 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	alphabet(char *str);

int	ft_str_is_numeric(char *str)
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
	int		x;
	_Bool	trobat;

	x = 48;
	trobat = 0;
	while (x <= 57)
	{
		if (*str == x)
			return (1);
		x ++;
	}
	return (0);
}
