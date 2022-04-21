/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:06:53 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/18 13:56:12 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculateint(char *str, int i, int contneg)
{
	int	res;

	res = 0;
	while ((str[i] >= 48) && (str[i] <= 59) && (str[i] != '\0'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}	
	if ((contneg % 2) != 0)
		res = res * -1;
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	contneg;
	int	res;

	i = 0;
	contneg = 0;
	if (str[i] == '\0')
		return (0);
	while ((str[i] == '\0') || (str[i] == '\t')
		|| (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
	{
		i++;
	}
	while ((str[i] != '\0') && ((str[i] < 48) || (str[i] > 59)))
	{
		if (str[i] == '-')
		{
			contneg = contneg + 1;
		}
			i++;
	}
	res = calculateint(str, i, contneg);
	return (res);
}
