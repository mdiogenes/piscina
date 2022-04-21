/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:00:45 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/15 15:11:16 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	cont;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			cont = i;
			while ((to_find[j]) && (str[cont] == to_find[j]))
			{
				j++;
				cont++;
			}
			if ((to_find[j] == '\0') && (str[cont - 1] == to_find[j - 1]))
				return (&str[i]);
		}
		i++;
	}	
	return (0);
}
