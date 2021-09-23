//Bai tap doi so thap phan sang nhi phan
#include <stdio.h>
#include <math.h>

void tentotwo(int);

int main()
{
	int n;
	printf("Nhap so thap phan n: ");
	scanf("%d",&n);
	tentotwo(n);
	printf("\n");
}

void tentotwo(int n)
{
	long long bin=0;
	int p=0;
	while(n>0)
	{
		bin = bin+(n%2)*pow(10,p);
		p++;
		n/=2;
	}
	printf("So sau khi chuyen sang nhi phan: %lld",bin);
}