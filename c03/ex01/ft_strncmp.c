/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:36:27 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/16 09:41:51 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = n;
	while (((*str2 != '\0') || (*str1 != '\0')) && (i != 0))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		i--;
	}
	return (0);
}
