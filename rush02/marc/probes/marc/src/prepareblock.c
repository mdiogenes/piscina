/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepareblock.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/14 17:47:19 by lblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_h.h"

char	*g_from_1_to_19[] = {"", "one ", "two ", "three ", "four ", "five ",
	"six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ",
	"thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ",
	"eighteen ", "nineteen "};

char	*g_tens[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ",
	"seventy ", "eighty ", "ninety "};

char	*g_hundred[] = {"hundred "};

char	*number_converter(long long int num)
{
	int		number;
	char	*str;
	void	free (void *pointres);

	str = malloc(sizeof(*str) * 100000);
	number = num;
	if (number > 99)
	{
		our_strcat(str, g_from_1_to_19[number / 100]);
		our_strcat(str, g_hundred[0]);
		our_strcat(str, g_tens[(number % 100) / 10]);
		our_strcat(str, g_from_1_to_19[(number % 100) % 10]);
	}
	else if (number > 19)
	{
		our_strcat(str, g_tens[number / 10]);
		our_strcat(str, g_from_1_to_19[number % 10]);
	}
	else if (number < 20)
	{
		our_strcat(str, g_from_1_to_19[number]);
	}
	return (str);
}
