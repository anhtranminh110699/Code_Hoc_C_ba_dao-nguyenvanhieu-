//Tinh giai thua cua so n nhap tu ban phim
#include <stdio.h>

int giaithua(int);

int main()
{
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	printf("Giai thua cua %d la: %d.\n",n,giaithua(n));
}

int giaithua(int n)
{
	if (n==1)
	{
		return 1;
	}
	return n * giaithua(n-1);
}