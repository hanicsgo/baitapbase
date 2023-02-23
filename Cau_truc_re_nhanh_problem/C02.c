#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    // Cạnh của một tam giác phải tổng không đổi của hai cạnh khác
    if( a<b+c && b<a+c && c<a+b )
    {
        // Công thức pytago
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
        {
        printf("day la tam giac vuong");
        }
    }
    else
    printf("day khong phai tam giac vuong");
}