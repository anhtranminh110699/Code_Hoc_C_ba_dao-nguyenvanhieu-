//Bai tap kiem tra so Armstrong
#include <stdio.h>
#include <math.h>

int demso(int);
void kiemtra(int,int,int);

int main()
{
	int n,dem;
	printf("Nhap so n: ");
	scanf("%d",&n);
	printf("So %d co %d chu so.\n",n,demso(n));
	dem = demso(n);
	kiemtra(n,dem,n);
}

int demso(int n)
{
	int dem;
	dem = 0;
	while (n>0)
	{
		dem ++;
		n=n/10;
	}
	return dem;
}
void kiemtra(int n,int dem,int a)
{	
	int i,b,check;
	check = 0;
	for(i=(dem-1);i>=0;i--)
	{
		b = a/pow(10,i);
		//printf("%d\n",b);
		check = check + pow(b,dem);
		//printf("%d\n",check);
		a=a-b*pow(10,i);
	}
	//printf("%d\n",check);
	if (check == n)
	{
		printf("n la so Armstrong.\n");
	}
	else
	{
		printf("n ko phai la so Armstrong.\n");
	}
}