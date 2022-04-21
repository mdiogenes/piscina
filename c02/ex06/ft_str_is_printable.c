/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:33:09 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/10 15:32:21 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	alphabet(char *str);

int	ft_str_is_printable(char *str)
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
	char	temp;

	x = 32;
	temp = *str;
	while (x <= 254)
	{
		if (x == *str)
			return (1);
		x ++;
	}
	return (0);
}
