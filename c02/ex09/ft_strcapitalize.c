/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:49:58 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/11 14:18:54 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*low(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) = *(str + i) - 'A' + 'a';
		i ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	j;

	j = 0;
	low(str);
	while (*(str + j) != '\0')
	{
		if (*(str + j) >= 'a' && *(str + j) <= 'z')
		{
			if (!(*(str + j - 1) >= 'a' && *(str + j - 1) <= 'z')
				&& !(*(str + j - 1) >= '0' && *(str + j - 1) <= '9')
				&& !(*(str + j - 1) >= 'A' && *(str + j - 1) <= 'Z'))
			{
				*(str + j) = *(str + j) - 'a' + 'A';
			}
		}
		j ++;
	}
	return (str);
}
