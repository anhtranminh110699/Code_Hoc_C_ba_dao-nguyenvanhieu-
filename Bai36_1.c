//Bai tap dao in nguoc chuoi (su dung de quy)
#include <stdio.h>

void nhap();

int main()
{
	printf("Nhap chuoi ki tu: ");
	nhap();
	printf("\n");
}

void nhap()
{
	char c;
	scanf("%c",&c);
	if (c != '\n')
	{
		nhap();
		printf("%c",c);
	}
}