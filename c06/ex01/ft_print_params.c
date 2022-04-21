/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:37:01 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/18 15:07:29 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>

int	main(int argc, char *argv[])
{
	int		n;
	char	*s1;

	if (argc < 1)
	{
		write(1, "eRRoOr", 6);
		exit(1);
	}
	n = 1;
	while (n < argc)
	{
		s1 = &argv[n][0];
		while (*s1 != '\0')
		{
			write(1, s1, 1);
			s1++;
		}
		write(1, "\n", 1);
		n++;
	}
}
