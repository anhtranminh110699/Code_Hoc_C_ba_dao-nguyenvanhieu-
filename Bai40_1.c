//Tim so Fibonaci thu n nhap tu ban phim (su dung ham de quy)
#include <stdio.h>

int fionacci(int);

int main()
{
	int n;
	printf("Nhap so thu tu thu n: ");
	scanf("%d",&n);
	printf("so thu %d trong day la: %d.\n",n,fionacci(n));
}

int fionacci(int n)
{
	if (n == 2 || n == 1)
	{
		return 1;
	}
	return fionacci(n-1)+fionacci(n-2);
}