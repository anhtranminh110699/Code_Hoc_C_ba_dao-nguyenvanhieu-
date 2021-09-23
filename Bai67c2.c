//Cap phat dong mang 2 chieu (cach 2)
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int *a = NULL, dong, cot;
    int i;
    printf("Nhap vao so dong = ");
    scanf("%d", &dong);
    printf("Nhap vao so cot = ");
    scanf("%d", &cot);
    // Cấp phát
    a = (int *)malloc(dong * cot * sizeof(int));
 
    // Nhập ma trận
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            printf("a[%d][]%d = ", i, j);
            scanf("%d", (a + i*dong + j));
        }
    }
 
    // Xuất ma trận
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            printf("%d\t", *(a + i*dong + j));
        }
        printf("\n");
    }
 
    // giải phóng
    free(a);
    return 0;
}

//co van de voi truong hop dong < cot