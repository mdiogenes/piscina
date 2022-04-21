/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_check.c	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/13 15:30:39 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_arg_check(int argc, char **argv, char **nb, char **dictio_file)
{
	if (argc == 2)
	{
		*dictio_file = "dict/numbers.dict";
		*nb = argv[1];
	}
	else if (argc == 3)
	{
		*dictio_file = argv[1];
		*nb = argv[2];
	}
	else
		return (0);
	return (1);
}
