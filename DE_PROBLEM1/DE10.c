#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
    int result = 1;
    for(int i = 1 ; i <= b; i++){
        result = pow(a,b);
    }
    printf("Ket qua:%d", result);

}