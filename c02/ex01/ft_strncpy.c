/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:07:20 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/11 13:28:56 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	j;
	unsigned int	contador;

	contador = 0;
	j = 0;
	while ((*(src + j) != '\0') && (j < n))
	{
		*(dest + j) = *(src + j);
		j++;
	}	
	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
