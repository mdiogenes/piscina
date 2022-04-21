#include<unistd.h>

int	repeatnumberhorizontal(int x, int y, int *tablafija)
{
	int num;
	int temporal;
	int counter;

	num = 0;
	temporal = tablafija[x+y];
	counter = 0;
	while (num < 16)
	{
		if (temporal == tablafija[num + y])
		   counter++;
		num = num + 4;
	}
	if (counter == 1)
		return(1);
	else
		return(0);
}

int	repeatnumbervertical(int x, int y, int *tablafija)
{
	int num;
	int temporal;
	int counter;

	num = 0;
	temporal = tablafija[x+y];
	counter = 0;
	while (num < 4)
	{
		if (temporal == tablafija[x + num])
			counter++;
		num++;
	}
	if (counter == 1)
		return('1');
	else
		return('0');
}

void magic(int x, int y, int *ptrtrobat, int *ptrcadena, int *tablafija)
{
	int num;
	int s;
	int r;
	int r2;
	
	s=1;
	while (x<=16)
	{
		y=0;
		while(y<=4)
		{
			if (ptrcadena[x+y] == 0)
			{
				num=1;
				while ((num <= 3)&&(!(*ptrtrobat == 1)))
				{
					tablafija[x + y] = num;
					//s = comprobarsum(x, y, ptrcadena, tablafija);
					r = repeatnumbervertical(x, y, tablafija);
					r2 = repeatnumberhorizontal(x, y, tablafija);
					if ( s == 1 && r == 1 && r2 == 1 && x== 16 && y==4)
						*ptrtrobat = 1;	
					if (r == 1)
						magic(x, y, ptrtrobat, ptrcadena, tablafija);
					num++;
				}
			}
		y ++;
		}
	x = x + 4;
	}
}
