#include<unistd.h>
#include<stdio.h>

void	 magic(int x, int y, int *ptrtrobat, int *ptrcadena, int *tablafija);
void	 llenartododeceros (int *tablafija);

int main()
{
	int g_x;
	int g_y;
	int trobat;
	int *ptrtrobat;
	int x;
	int y;
	int z;
	int w;
	int taulaseq[4][4]={{4,3,2,1},{1,2,2,2},{4,3,2,1},{1,2,2,2}};
	int	*ptrcadena;	
	int *tablafija;
	int tabla [4][4];
	tablafija = &tabla [0][0];
	llenartododeceros(tablafija);
	trobat = 0;
	ptrtrobat = &trobat;
	ptrcadena = &taulaseq[0][0];
	x = 0;
	y = 0;
	//funcion escriure fixes
	magic(x, y, ptrtrobat, ptrcadena, tablafija);	
	z = 0;
	//imprime taulasequencia
	printf("\n");
	while (z < 16)
	{
		w=0;
		while (w < 4)
		{
			printf("%d", ptrcadena[z+w]);	
			w ++;
		}
		printf("seguentfila\n");
		z=z+4;
	}

//imprimir cubo
	printf("\n");
	g_y=0;
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
