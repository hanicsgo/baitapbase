#include <stdio.h>
#include <conio.h>
 
int main()
{
    int a, b, c;
    int temp;
 
    scanf("%d%d%d", &a, &b, &c);
 
    // chuyển số bé nhất vào a
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
 
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
 
    // chuyển số bé nhì vào b
   if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
 
    printf("%d%d%d", a, b, c);
    getch();
    return 0;
}