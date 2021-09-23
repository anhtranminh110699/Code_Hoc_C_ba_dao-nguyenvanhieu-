//Tim vi tri so lon nhat trong mang 1 chieu
#include <stdio.h>

void nhapmang(int[],int);
void xuatmang(int[],int);
void timpmax(int[],int);

int main()
{
	int n;
	int a[50];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
	timpmax(a,n);

}

void nhapmang(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
	}
}

void xuatmang(int a[],int n)
{
	int i;
	printf("Mang a gom cac phan tu: ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void timpmax(int a[],int n)
{
	int i,max,pmax;
	max = a[0];
	pmax = 0;
	for (i=0;i<n;i++)
	{
		if (max<a[i])
		{
			max = a[i];
			pmax = i+1;
		}
	}
	printf("Gia tri lon nhat cua mang la %d va nam o vi tri %d.\n",max,pmax);
}