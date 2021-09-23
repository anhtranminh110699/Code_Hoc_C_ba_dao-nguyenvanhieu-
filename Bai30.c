//Tinh tong cac so tu 1 den n (su dung de quy)
#include <stdio.h>

int sum(int);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Tong cac chu so tu 0 den n la: %d\n",sum(n));
}

int sum(int n)
{
	if (n==0)
	{
		return 0;
	}
	return n + sum(n-1);
}