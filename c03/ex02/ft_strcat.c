/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:57:36 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/14 11:58:18 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (*(dest + j) != '\0')
		j++;
	while (*(src + i) != '\0')
	{
		*(dest + i + j) = *(src + i);
		i++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
