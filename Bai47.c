//Thuat toan sap xep noi bot
#include <stdio.h>
#include <stdbool.h>

void swap(int*,int*);
void bubbleSort(int[],int);
void outputlate(int[],int);

int main()
{
	int a[]={64,34,25,12,22,11,90};
	int n = sizeof(a)/sizeof(a[0]);
	printf("so pt: %d.\n",n);
	bubbleSort(a,n);
	outputlate(a,n);
	return 0;
}

//ham swap
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//ham bubbleSort
void bubbleSort(int a[],int n)
{
	int i,j;
	bool haveSwap = false;
	//i la so so cuoi da duoc sap xep
	for (i=0;i<n-1;i++)
	{
		haveSwap = false;
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				haveSwap = true;
			}
		}
		if (haveSwap == false)
		{
			break;
		}
	}
}

//ham in mang sau sap xep
void outputlate(int a[],int n)
{
	printf("Day sau khi duoc sap xep: ");
	for (int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}