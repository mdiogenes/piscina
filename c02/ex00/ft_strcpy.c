/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:07:20 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/04 16:00:11 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest2;
	char	*src2;

	dest2 = dest;
	src2 = src;
	while (*src2 != '\0')
	{
		*dest2 = *src2;
		src2 ++;
		dest2 ++;
	}
	*dest2 = '\0';
	return (dest);
}
