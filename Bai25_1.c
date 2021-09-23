//Tim boi chung nho nhat cua 2 so
#include <stdio.h>

int main()
{
	int a,b,i,j;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	for (i=1;i<=a;i++)
	{
		for (j=1;j<=b;j++)
		{
			if(i*b==j*a)
			{
				printf("Boi chung nho nhat cua a va b la: %d\n",b*i);
				break;
			}
		}
		if (i*b==j*a)
		{
			break;
		}
	}
}