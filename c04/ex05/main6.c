/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:30:22 by aalmela-          #+#    #+#             */
/*   Updated: 2021/11/15 13:07:15 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


int	ft_atoi_base(char *str, char *base);

int	main(int ac, char **av)
{
	int		nb;
	if (ac >= 3)
	{
		nb = ft_atoi_base(av[1], av[2]);
		printf("%d\n", nb);
	}
	return (0);
}