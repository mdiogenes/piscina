#include <unistd.h>
#include <stdio.h>

void llenartododeceros(int  *tablafija)
{
	int g_x;
	int g_y;

	g_x = 0;
	g_y = 0;
	while(g_y < 16)
	{ 
		g_x = 0;
		while(g_x < 4)
		{
			
			tablafija[g_x + g_y] = 0;
			g_x++;
		}
		g_y = g_y +4;
	}
	g_y = 0;
	while(g_y < 16)
	{
		g_x = 0;
		while(g_x < 4)
		{
		 	printf(" %d", tablafija[g_x + g_y]);
			g_x++;
		}
		printf("\n");
		g_y = g_y +4;
	}
}
