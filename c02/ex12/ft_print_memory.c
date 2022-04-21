/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:41:43 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/09 18:35:46 by msoler-e        ###   ########.bcn       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	hexadecimal(void *addr)
{
	void *addr2;

	addr2=&addr;


	write(1, *addr, 20);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i;
	
	while (size > 0)
	{
		printf("size:%d",size);
		i = 1;		
		while (i <= 16)
		{
			hexadecimal(addr);
			i ++;
		}
		size --;
	}	
	return (addr);
}
