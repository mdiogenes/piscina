/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:33:09 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/10 12:15:52 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	alphabet(char *str);

int	ft_str_is_alpha(char *str)
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
	int		y;
	_Bool	trobat;

	x = 65;
	y = 97;
	trobat = 0;
	while (x <= 90)
	{
		if ((*str == x) || (*str == y))
			return (1);
		x ++;
		y ++;
	}
	return (0);
}
