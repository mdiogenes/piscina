#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int array[10] = {10, 23, -4, 0, 75, 49, 85, 36, 62, -43};
	
	int i = 1;
	printf ("Array before function : %d", array[0]);
	while (i < 10)
	{
		printf ( ", %d", array[i]);
		i++;
	}
	ft_rev_int_tab(&array[0], (sizeof(array) / 4));
	i = 1;
	printf ("\nArray after before function : %d", array[0]);
	while (i < 10)
	{
		printf ( ", %d", array[i]);
		i++;
	}
}
