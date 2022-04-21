/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/14 17:25:12 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_h.h"

int	ft_strlen(char *str)
{
	int	cont;
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	cont = 0;
	while (str[i] != '\0')
	{
		cont = cont + 1;
		i++;
	}
	return (cont);
}	
// Function to implement `strcat()` function in C

char	*our_strcat(char *destination, const char *source)
{
	char	*ptr;	// make `ptr` point to the end of the destination string
	ptr = destination + ft_strlen(destination);
	// appends characters of the source to the destination string
	while (*source != '\0')
	{
	*ptr++ = *source++;
	}
	// null terminate destination string
	*ptr = '\0';
	// the destination is returned by standard `strcat()`
	return (destination);
}
