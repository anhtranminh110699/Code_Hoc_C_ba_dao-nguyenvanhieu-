//Bai tap xep loai hoc sinh (su dung if_else)
#include <stdio.h>
#include <curses.h>

int main()
{
	float math,lit,eng,ad;
	char name[50];
	printf("Nhap vao ten hoc sinh: ");
	gets(name);
	printf("Nhap vao diem toan: ");
	scanf("%f",&math);
	printf("Nhap vao diem van: ");
	scanf("%f",&lit);
	printf("Nhap vao diem anh: ");
	scanf("%f",&eng);
	ad = (math+lit+eng)/3;
	printf("Trung binh cong diem 3 mon cua %s la: %f.\n",name,ad);
	if(ad>0&&ad<=0.4)
	{
		printf("Xep loai Yeu.");
	}
	else if(ad>0.4&&ad<=6.5)
	{
		printf("Xep loai Trung Binh.");
	}
	else if(ad>6.5&&ad<=8)
	{
		printf("Xep loai Kha.");
	}
	else
	{
		printf("Xep loai Gioi.");
	}
	printf("\n");
}