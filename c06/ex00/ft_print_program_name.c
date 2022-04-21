/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:18:10 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/19 09:18:12 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

int	main(int argc, char *argv[])
{
	char	*s1;

	if (argc < 1)
	{
		write(1, "ErRoRR", 6);
		exit(1);
	}
	s1 = &argv[0][0];
	while (*s1 != '\0')
	{
		write(1, s1, 1);
		s1++;
	}
}
