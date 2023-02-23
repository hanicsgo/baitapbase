#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    int max = a;
    if (a > max) 
    {
    max = a;
    }

    // Kiểm tra xem b có lớn hơn max hay không
    if (b > max) 
    {
    max = b;
    }

    // Kiểm tra xem c có lớn hơn max hay không
    if (c > max) 
    {
    max = c;
    }

    printf("so lon nhat la: %d", max);
}
