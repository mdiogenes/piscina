/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:48:28 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/04 09:09:35 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{
		size = size + 1;
		str ++;
	}
	return (size);
}
