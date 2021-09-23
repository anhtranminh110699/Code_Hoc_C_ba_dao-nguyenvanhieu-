//Sap xep mang mot chieu tang/giam dan
#include <stdio.h>

void input(int[],int);
void output(int[],int);
void check(int[],int);

int main()
{
	int n;
	int a[50];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	input(a,n);
	output(a,n);
	check(a,n);
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
	printf("Mang: ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void check(int a[],int n)
{
	int i,j,tam;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	printf("Day so sau khi sawp xep tang dan: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}