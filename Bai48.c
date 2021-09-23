//Thuat toan sap xep chon
#include <stdio.h>

void swap(int*,int*);
void sapxep(int[],int);
void outputlate(int[],int);

int main()
{
	int a[]={64,15,12,22,11};
	int n = sizeof(a)/sizeof(a[0]);
	printf("so pt: %d.\n",n);
	sapxep(a,n);
	outputlate(a,n);
}

//ham chuyen vi
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//ham sap xep
void sapxep(int a[],int n)
{
	for(int i;i<n-1;i++)
	{
		int minx=i;
		for(int j = i+1;j<n;j++)
		{
			if (a[j]<a[minx])
			{
				swap(&a[j],&a[minx]);
			}
		}
	}
}

//ham in ra sau sap xep
void outputlate(int a[],int n)
{
	printf("Day sau khi sap xep: ");
	for (int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}