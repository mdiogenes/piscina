/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proc_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2, lblanco- & msoler-               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/11/2021 10:42:42 by lmartin2          #+#    #+#             */
/*   Updated: 2021/11/14 20:12:14 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_h.h"

void	ft_expon(int blocs, char *my_dict)
{
	int			x;
	long int	num;

	my_dict[0] = my_dict[0];
	x = 0;
	num = 1;
	while (x < blocs)
	{
		num = num * 1000;
		x++;
	}
	printf("\n\nnumero busquem diccionar:%ld", num);
	//busca al diccionario el numero num i lescrius!!!!!!!!!!!!!!!!!!!!!!!!!!
}

int	ft_blocsno3(int res[], int j, int blocs, char *my_dict)
{
	int	numero;

	numero = 0;
//el numero no es multiple de 3 per tant ens traiem els sobrants de l'esquerra
	if (blocs == 1)
	{
		numero = res[j];
		j = 1; //hem escrit un valor
	}
	if (blocs == 2)
	{
		numero = res[j + 1];
		numero = numero + res[j] * 10;
		j = 2; //hem escrit 2 valors	
	}
	printf("\n\nnumero enviem:%d", numero);
	//number_converter(numero);	
	//enviar numero a la funcio escriure !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//enviar numero a la funcio escriure !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return (j);
}

void	ft_cutnumber(int res[], int j, int blocs, char *my_dict)
{
	long long int	numero;

	while (blocs >= 0)
	{
		//char string_test[50];
		//string_test = (char **)malloc(sizeof(char*));
		numero = 0;
		numero = res[j + 2];
		numero = numero + (res[j + 1] * 10);
		numero = numero + (res[j] * 100);
		//*string_test = "we just try";
		//printf("%s\n", *string_test);
		printf("\n\nnumero enviem:%lld", numero);
		printf("%s", number_converter(numero));
		if (blocs != 0)
			ft_expon(blocs, my_dict);//miren en quin factor estem i l'escribim
		//enviar numero a la funcio escriure !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		blocs--;
		j = j + 3;
		//free(string_test);
	}
}

void	nb_process(char *nb, char *my_dict)
{
	int	i;
	int	j;
	int	blocs;	
	int	res[10];
	int	*pointres;
	//numero de numeros que tenim
	//noblocs de 3 que tenim
	//taula temp del numero a processar
	//punter a la taula
	pointres = &res[0];
	ft_inicialitza(pointres);
	i = 0;
	j = 0;
	blocs = 0;
	my_dict[0] = my_dict[0];
	while (nb[i] != '\0')
	{
		res[i] = nb[i] - '0';
		i++;
	}
	printf("\nquantita de numeros que ens arriben es :%d", i);
	//size del string que ens arriba es i ( no contem el \0 pero comencem per 0
	blocs = i % 3;//si no es multiple de 3 entrem a la funcio no multiple
	if (blocs != 0)
		j = ft_blocsno3(res, j, blocs, my_dict);
	blocs = i / 3;
	if (blocs != 0)
		ft_expon(blocs, my_dict);//miren en quin factor estem i l'escribim

	blocs = blocs - 1; //el primer parell ja esta entrat 
	ft_cutnumber(res, j, blocs, my_dict);
}

int	main()
{
	char	taula[10] = {'2','1','2','3','4','5','6','7','\0'};
	//char	taula[10] = {'0', '2', '7', '6', '7', '3'};
	char	*nb;
	char	*my_dict;
	char	temp;

	temp = 'a';
	my_dict = &temp;
	nb = &taula[0];
	nb_process(nb, my_dict);
}
