/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/14 23:29:35 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	main(int argc, char **argv)
{
	char	*nb;
	char	*dictio_file;
	char	*dictio;

	nb = 0;
	dictio_file = 0;
	dictio = 0;
	if (ft_arg_check(argc, argv, &nb, &dictio_file) == 0)
		return (0);
	dictio = ft_dictio_load(dictio_file);
	if (dictio == 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (ft_nb_process(nb, dictio) == 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (ft_memory_clear(dictio) == 0)
		return (0);
	return (1);
}
