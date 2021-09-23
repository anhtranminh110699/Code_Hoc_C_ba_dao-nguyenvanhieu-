#include <stdio.h>
#include <stdlib.h>

struct person
{
	int age;
	float weight;
	char name[30];
};

int main()
{
	struct person *p;
	int i, n;
	printf("Nhap so nguoi: ");
	scanf("%d",&n);

	p=(struct person*)malloc(n*sizeof(struct person));

	for (i=0;i<n;i++)
	{
		printf("Nhap ten va tuoi: ");
		scanf("%s %d",(p+i)->name,&(p+i)->age);
		printf("Nhap can nang: ");
		scanf("%f",&(p+i)->weight);
	}
	printf("\n");

	for (i=0;i<n;i++)
	{
		printf("Name: %s Age: %d Weight: %f\n",(p+i)->name,(p+i)->age,(p+i)->weight);
	}
	printf("\n");
	free(p);
	return 0;
}