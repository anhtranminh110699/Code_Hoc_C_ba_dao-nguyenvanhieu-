//Viet chuong trinh in ra bang cuu chuong (su dung vong lap for)
#include <stdio.h>

int main()
{
	int i,j;
	printf("Bang cuu chuong\n\n");
	for(i=1;i<9;i++)
	{
		for (j=1;j<10;j++)
		{
			printf("%dx%d=%2d\n",i,j,i*j);
		}
		printf("\n\n");
	}
}