#include <stdio.h>

int main ()
{
    int n;
    float f;
    char c;
    scanf("%d%f", &n, &f);
    fflush(stdin);
    scanf("%c",&c);
    printf("%d\n%.2f\n%c", n, f, c);
}