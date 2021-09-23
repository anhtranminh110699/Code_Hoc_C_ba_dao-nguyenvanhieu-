//Tinh tong cac so chan trong doan [a,b]
#include <stdio.h>

int main()
{
	int i,a,b,sum;
	sum = 0;
	printf("Nhap so a va b: ");
	scanf("%d %d",&a,&b);
	for (i=a;i<=b;i++)
	{
		if (i%2==0)
		{
			sum +=i;
		}
	}
	printf("Tong cac so chan trong khoang tu %d den %d la: %d.\n",a,b,sum);
}