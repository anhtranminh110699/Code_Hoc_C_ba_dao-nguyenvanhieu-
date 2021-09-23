//Bai tap phan tich thua so nguyen to
#include <stdio.h>

int main()
{
	int i,n,temp;
	printf("Nhap vao mot so n: ");
	scanf("%d",&n);
	printf("Tich thua so nguyen to cua %d la: ",n);
	for (i=2;i<=n;i++)
	{
		temp = 0;
		while(n%i==0)
		{
			temp ++;
			n = n/i;
		}
		if (temp) //if temp = 1
		{
			if (temp > 1)
			{
				printf("%d^%d",i,temp);
			}
			else
			{
				printf("%d",i);
			}
			if (n>1)
			{
				printf("*");
			}
		}
	}
}