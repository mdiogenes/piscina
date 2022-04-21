/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:14:56 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/04 16:56:56 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int		main()
{
	int cadena[]={2,3,1,5,7,9,0};
	int *tab;
	
	int size;
	int x;
	
	tab = &cadena[0];
	size = (sizeof(cadena) / 4)-1;
	x = 0;
		
	printf("la cadena de %d elements\n", size);
	while (x <= size)
	{
		printf("%d ",tab[x]); 
		x ++; 
	}
	
	ft_sort_int_tab(tab,size);

	x=0;
	printf("\nla cadena Ordenada es\n");
	while (x <= size)
	{
		printf("%d ",tab[x]); 
		x ++; 
	}
}
