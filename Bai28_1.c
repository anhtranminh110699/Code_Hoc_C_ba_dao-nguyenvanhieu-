//Ham tim max or min cua 3 so (viet ham tra ve)
#include <stdio.h>

int findmax1(int, int);
int findmax(int, int);

int main()
{
	int a,b,c;
	printf("Nhap 3 so a, b, c lan luot: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("So lon nhat trong 3 so a, b, c la: %d\n",findmax(c,findmax1(a,b)));
}

int findmax1(int x, int y)
{
	int max1;
	max1 = x;
	if (max1 < y)
	{
		max1 = y;
	}
	return max1;
}

int findmax(int z, int u)
{
	int max;
	max = z;
	if (max < u)
	{
		max = u;
	}
	return max;
}