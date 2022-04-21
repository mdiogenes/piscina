/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:36:27 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/15 14:20:26 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	tiebreaker(char *s1, char *s2)
{
	int	tie;

	tie = 0;
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			tie = (*s1 - *s2);
			return (tie);
		}
		s1++;
		s2++;
	}
	return (tie);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	resul;

	resul = 0;
	resul = tiebreaker(s1, s2);
	return (resul);
}
