//Tim so lon nhat tron 3 so a, b, c (su dung if_else)
#include <stdio.h>

int main()
{
	int a,b,c,max;
	//max = a; //sai
	printf("Nhap vao 3 so a, b, c: ");
	scanf("%d %d %d",&a,&b,&c);
	max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	printf("So lon nhat trong 3 so a, b, c la: %d.\n",max);
}