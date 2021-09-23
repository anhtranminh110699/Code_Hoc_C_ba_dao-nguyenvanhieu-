//In ra cac so nguyen to nho hon 1000
#include <stdio.h>
#include <math.h>

int main()
{
	int i,j, count;
	//count = 0;  //sai
	printf("Cac so nguyen to nho hon 1000 la: \n");
	for (i=1;i<1000;++i)
	{
		count = 0; //can dat trong day vi sau moi vong lap chia se can count ve nhu cu de thuc hien vong lap chia kiem tra cho so khac.
		for (j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if (count == 0 && i>1)
		{
			printf("%d\t",i);
		}
	}
}