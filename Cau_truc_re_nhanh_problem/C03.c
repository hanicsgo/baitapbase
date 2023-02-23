#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    int max = a;
    // Kiểm tra xem a có lớn hơn max hay không
    if (a > max) 
    {
    max = a;
    }

    // Kiểm tra xem b có lớn hơn max hay không
    if (b > max) 
    {
    max = b;
    }

    printf("so lon nhat la %d", max);
}