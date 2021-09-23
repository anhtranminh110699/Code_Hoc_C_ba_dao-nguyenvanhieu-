//Tim so lon thu hai trong mang mot chieu
#include <stdio.h>

void input(int[],int);
void output(int[],int);
int findsecondMax(int[],int);

int main()
{
	int n;
	int a[50];
	printf("Nhap so pt cua mang: ");
	scanf("%d",&n);
	printf("Nhap vao mang\n");
	input(a,n);
	printf("Xuat mang\n");
	output(a,n);
	printf("So lon thu 2 cua mang la: %d.\n",findsecondMax(a,n));
}

void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void output(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

int findsecondMax(int a[],int n) //chi cho day ko co so giong nhau
{
	int first,second;
	if (a[0]>a[1])
	{
		first = a[0];
		second = a[1];
	}
	else
	{
		first = a[1];
		second = a[0];
	}
	for (int i = 2;i<n;i++) //i bat dau tu 2
	{
		if(a[i]>=first)
		{
			second = first;
			first = a[i];
		}
		else if(a[i]>second)
		{
			second = a[i];
		}
	}
	return second;
}

//de lam voi day co so trung nhau
//ta nen sap xep truoc roi su dung vong lap va cau lenh dieu kien de tim ra
//so lon thu 2 sau khi sap xep.