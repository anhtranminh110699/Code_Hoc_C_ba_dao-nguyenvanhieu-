//Kiem tra mot so nguyen ma no duoc tao tu cac so chan hay ko
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main()
{
	int n,a;
	printf("Nhap vao so nguyen n: ");
	scanf("%d",&n);
	bool allEven = true; //gia su ban dau la dung
	while (n>0)
	{
		a = n%10;
		if(a%2==1)
		{
			allEven = false;
			break; //thoat vong lap
		}
		n /= 10;
	}
	if(allEven)
	{
		printf("\nToan chu so chan!\n");
	}
	else
	{
		printf("\nCo ca chu so le!\n");
	}
}