/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:07:20 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/18 10:48:35 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	j;

	j = 0;
	count = 0;
	while (src[count])
		count++;
	if (size > 0)
	{
		while (src[j] && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		while (dest[j])
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (count);
}
