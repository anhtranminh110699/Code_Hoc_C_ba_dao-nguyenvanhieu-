//Bai tap chuyen so bat phan sang thap phan
#include <stdio.h>
#include <math.h>

int octtodec(int);

int main()
{
	int n;
	printf("Nhap so bat phan n: ");
	scanf("%d",&n);
	printf("%d chuyen sang he thap phan la: %d.\n",n,octtodec(n));
}

int octtodec(int oct)
{
	int p,dec;
	p=0;
	dec=0;
	while (oct>0)
	{
		dec = dec + (oct%10) * pow(8,p);
		p++;
		oct/=10;
	}
	return dec;
}