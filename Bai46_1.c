//Liet ke cac so nguyen to trong mang mot chieu
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 50

void input(int[],int);
void output(int[],int);
bool isPrime(int);
int primeCount(int[],int);
void printfPrime(int[],int);

int main()
{
	int n, a[MAX];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	input(a,n);
	printf("\n");
	output(a,n);
	printf("\n");
	printf("So luong so nguyen to la: %d.\n",primeCount(a,n));
	if (primeCount(a,n)>0)
	{
		printf("Danh sach so nguyen to trong mang: ");
		printfPrime(a,n);
	}
	printf("\n");
}

void input(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void output(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

bool isPrime(int n)
{
	if (n<2)
		return false;
	for (int i = 2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int primeCount(int a[],int n)
{
	int count = 0;
	for(int i = 0;i<n;i++)
	{
		if (isPrime(a[i]))
		{
			count++;
		}
	}
	return count;
}

void printfPrime(int a[],int n)
{
	for (int i = 0;i<n;i++)
	{
		if (isPrime(a[i]))
		{
			printf("%d ",a[i]);
		}
	}
}