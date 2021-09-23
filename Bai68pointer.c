#include <stdio.h>

struct person
{
	int age;
	float weight;
};

int main()
{
	struct person *persionPtr, persion1;
	persionPtr = &persion1; //ko co dong nay thi nhung dong duoi se sai.
	printf("Enter age: ");
	scanf("%d",&persionPtr->age);
	printf("Enter weight: ");
	scanf("%f",&persionPtr->weight);
	printf("Displaying:\n");
	printf("Age: %d\n",persionPtr->age);
	printf("Weight: %f\n",persionPtr->weight);

	/*printf("Enter age: ");
	scanf("%d",&persion1.age);
	printf("Enter weight: ");
	scanf("%f",&persion1.weight);
	printf("Displaying:\n");
	printf("Age: %d\n",persion1.age);
	printf("Weight: %f\n",persion1.weight);*/

	/*printf("Enter age: ");
	scanf("%d",&(*persionPtr).age);
	printf("Enter weight: ");
	scanf("%f",&(*persionPtr).weight);
	printf("Displaying:\n");
	printf("Age: %d\n",(*persionPtr).age);
	printf("Weight: %f\n",(*persionPtr).weight);*/

	printf("\n\n");
	printf("%d\n",persion1.age);
	printf("%f\n",persion1.weight);
	printf("\n\n");
	printf("%d\n",(*persionPtr).age);
	printf("%f\n",(*persionPtr).weight);

	printf("\n");
	printf("%u\n",&persion1.age);
	printf("%u\n",&persion1.weight);
	printf("%u\n",&persionPtr->age);
	printf("%u\n",&persionPtr->weight);
	printf("%u\n",&(*persionPtr).age);
	printf("%u\n",&(*persionPtr).weight);
	return 0;
}

//con tro chi co tac dung la con tro khi tro den bien tronf kieu struct.