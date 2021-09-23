//Chuong trinh quan ly sinh vien (them mot so chuc nang)
#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct sinhVien
{
	char name[30];
	char sex[10];
	int age;
	float pM,pP,pC;
	float dTB;
} SV;

float tinhDTB(SV*);
void nhap(SV*,int);
void nhapN(SV*,int*);
void xuat(SV*);
void xuatN(SV*,int*);
//void sapxep(SV*,SV*);
void sapxepN(SV*,int);
void xeploai(SV*);
void xeploaiN(SV*,int);
void them(SV**,int*);
void xoa(SV**,int*);
void xuatfile(SV*,int);

int main()
{
	SV *p;
	int key;
	int n;
	bool danhap = false;
	//FILE *fp; //phai nam cung ham xuat danh sach

	do
	{
		printf("Nhap so luong sinh vien: ");
		scanf("%d",&n);
	} while (n<=0);

	p=(SV*)malloc(n*sizeof(SV));
	//tuong duong khai bao mang cua kieu du lieu struct
	//voi con tro p chi vao p=&a[i]

	while(true) //thay the ham goto.
	{
		printf("                       *                         \n");
		printf("                     *   *                       \n");
		printf("=================================================\n");
		printf("        CHUONG TRINH QUAN LY SINH VIEN           \n");
		printf("=================================================\n");
		printf("==     1. Nhap danh sach sinh vien.            ==\n");
		printf("==     2. Xuat danh sach sinh vien.            ==\n");
		printf("==     3. Sap xep theo diem trung binh.        ==\n");
		printf("==     4. Xep loai sinh vien.                  ==\n");
		printf("==     5. Them sinh vien vao danh sach.        ==\n");
		printf("==     6. Xoa sinh vien khoi danh sach.        ==\n");
		printf("==     7. Xuat danh sach ra file.              ==\n");
		printf("==     0. Thoat.                               ==\n");
		printf("=================================================\n\n");
		printf("Nhap muc ban muon lua chon: ");
		scanf("%d",&key);
		switch(key)
		{
			case 0: printf("Ban da chon THOAT chuong trinh\n");
					printf("Chuong trinh da thoat!\n");
					return 0; //tra ve 0, sai dk true -> thoat vong lap
					break; //break o day la thoat switch

			case 1: printf("Ban da chon NHAP danh sach sinh vien\n");
					printf("-------------------------------------\n");
					nhapN(p,&n);
					printf("Ban da NHAP thanh cong!\n");
					danhap = true;
					//printf("Bam phim bat ki de tiep tuc!\n");
					//getch(); //ko su dung duoc o ubuntu
					printf("%d",n);
					break;

			case 2: if (danhap == false)
					{
						printf("Ban can nhap danh sach truoc!\n");
					}
					else
					{
						printf("Ban da chon XUAT danh sach sinh vien\n");
						printf("-------------------------------------\n");
						xuatN(p,&n);
						printf("Ban da XUAT thanh cong!\n");
					}
					//printf("Bam phim bat ki de tiep tuc!\n");
					//getch();
					printf("%d",n);
					break;

			case 3: if (danhap == false)
					{
						printf("Ban can nhap danh sach truoc!\n");

					}
					else
					{
						printf("Ban da chon SAP XEP theo diem trung binh\n");
						printf("-------------------------------------\n");
						sapxepN(p,n);
						xuatN(p,&n);
						printf("Ban da SAP XEP thanh cong!\n");
					}
					printf("%d",n);
					break;

			case 4: if (danhap == false)
					{
						printf("Ban can nhap danh sach truoc!\n");

					}
					else
					{
						printf("Ban da chon XEP LOAI danh sach\n");
						printf("-------------------------------------\n");
						xeploaiN(p,n);
						printf("Ban da XEP LOAI thanh cong!\n");
					}
					printf("%d",n);
					break;

			case 5: if (danhap == false)
					{
						printf("Ban can nhap danh sach truoc!\n");

					}
					else
					{
						printf("Ban da chon THEM danh sach\n");
						printf("-------------------------------------\n");
						them(&p,&n);
						printf("Ban da THEM thanh cong!\n");
					}
					printf("%d",n);
					break;

			case 6: if (danhap == false)
					{
						printf("Ban can nhap danh sach truoc!\n");

					}
					else
					{
						printf("Ban da chon XOA sinh vien\n");
						printf("-------------------------------------\n");
						xoa(&p,&n);
						printf("Ban da XOA thanh cong!\n");
					}
					printf("%d",n);
					break;
			case 7: if (danhap == false)
					{
						printf("Ban can nhap danh sach truoc!\n");

					}
					else
					{
						printf("Ban da chon XUAT DANH SACH FILE\n");
						printf("-------------------------------------\n");
						xuatfile(p,n);
						printf("Ban da XUAT DANH SACH FILE!\n");
					}
					printf("%d",n);
					break;

			default: printf("Khong co chuc nang nay!\n");
					 printf("Moi ban nhap lai!\n");
					 printf("%d",n);
					 break;
		}
	}
	free(p);
}

//Ham tinh diem Trung Binh
float tinhDTB(SV *p)
{
	p->dTB = (p->pM+p->pP+p->pC)/3;
	return p->dTB;
}

//Ham nhap so lieu 1 sv
void nhap(SV *p,int i)
{
	printf("Nhap so lieu sinh vien thu %d.\n",(i+1));
	printf("Nhap ten: ");
	gets();
	gets(&p->name);
	printf("Nhap gioi tinh: ");
	gets(&p->sex);
	printf("Nhap tuoi: ");
	scanf(" %d",&p->age);
	printf("Nhap diem Toan, Ly, Hoa: ");
	scanf(" %f/%f/%f",&p->pM,&p->pP,&p->pC);
	printf("Diem trung binh: %f\n",tinhDTB(p));
}

//Ham nhap so lieu N sv
void nhapN(SV *p,int *n)
{
	for (int i=0;i<*n;i++)
	{
		//printf("Nhap so lieu sinh vien thu %d.\n",(i+1));
		nhap((p+i),i);
		printf("\n");
	}
}

//Ham xuat so lieu 1 sv
void xuat(SV *p)
{
	printf("%20s|%5s|%3d|%2.1f|%2.1f|%2.1f|%6.5f|\n",p->name,p->sex,p->age,p->pM,p->pP,p->pC,p->dTB);
}

//Ham nhap so lieu N sv
void xuatN(SV *p,int *n)
{
	printf("|     Ho va ten     | GT  |AGE|Mat|Phi|Che|  dTB  |\n");
	printf("|_________________________________________________|\n");
	for (int i=0;i<*n;i++)
	{
		xuat((p+i));
		printf("\n");
	}
}

//Ham sap xep
/*void sapxep(SV *a,SV *b)
{
	SV temp;
	temp = a;
	a = b;
	b = temp;
}*/

//Ham sap xep theo diem Trung Binh
void sapxepN(SV *p,int n)
{
	SV temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (((p+i)->dTB)<((p+j)->dTB))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
}

//Ham xep loai
void xeploai(SV *p)
{
	if ((p->dTB)>=8)
	{
		printf("Xep loai Gioi!\n");
	}
	else if ((p->dTB)<8 && (p->dTB)>=6)
	{
		printf("Xep loai Kha!\n");
	}
	else if ((p->dTB)<6 && (p->dTB)>=4)
	{
		printf("Xep loai Kem!\n");
	}
}

//Ham xep loai sinh vien
void xeploaiN(SV *p,int n)
{
	for(int i=0;i<n;i++)
	{
		xuat((p+i));
		xeploai((p+i));
	}
}

//Ham them sinh vien vao danh sach
void them(SV **p,int *n)
{
	int pos;
	printf("Chon thu tu ban muon them: ");
	scanf("%d",&pos);
	*p=(SV*)realloc(*p,(*n+1)*sizeof(SV));
	for (int i=*n;i>(pos-1);i--)
	{
		*(*p+i) = *(*p+i-1);
	}
	nhap((*p+(pos-1)),(pos-1));
	++*n;
	xuatN(*p,n);
}

//Ham xoa sinh vien trong danh sach
//pos la vi tri sinh vien can xoa trong danh sach hien tai
//co pos nen phai dung vong lap for trong ham nay, ko nhu ham them phai tren
void xoa(SV **p,int *n)
{
	int pos;
	printf("Chon thu tu ban muon xoa: ");
	scanf("%d",&pos);
	if(pos>=1 && pos<=*n)
	{
		for(int i=(pos-1);i<*n;i++)
		{
			*(*p+i)=*(*p+i+1);
		}
	}
	*p=(SV*)realloc(*p,(*n-1)*sizeof(SV)); //tuy so o nho con lai giam di,nhung gia tri nam tren o thua ra van con.
	--*n;
	xuatN(*p,n);
}

//Ham xuat ra file
void xuatfile(SV *p,int n)
{
	FILE *fp;
	fp = fopen("/home/anhtran/Documents/C/Hoc_C_ba_dao/Bai69.txt","a");
	if (fp == NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	fprintf(fp,"|     Ho va ten     | GT  |AGE|Mat|Phi|Che|  dTB  |\n");
	fprintf(fp,"|_________________________________________________|\n");
	for (int i=0;i<n;i++)
	{
		fprintf(fp,"%20s|%5s|%3d|%2.1f|%2.1f|%2.1f|%6.5f|\n",(p+i)->name,(p+i)->sex,(p+i)->age,(p+i)->pM,(p+i)->pP,(p+i)->pC,(p+i)->dTB);
	}
	fclose(fp);
	//return 0;
}