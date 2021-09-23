//Bai tap chuyen so thap phan sang bat phan
#include <stdio.h>
#include <math.h>

int dectooct(int);

int main()
{
	int n;
	printf("Nhap so n he thap phan: ");
	scanf("%d",&n);
	printf("%d doi ra he bat phan la: %d.\n",n,dectooct(n));
}

int dectooct(int n)
{
	int oct,p;
	p = 0;
	oct = 0;
	while (n>0)
	{
		oct += (n%8) * pow(10,p);
		p++;
		n/=8;
	}
	return oct;
}