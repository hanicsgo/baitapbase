#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char x = 'F';
    printf("%c\n", x);

    // Kí tự x chuyển về kiểu viết thường
    x = toupper(x) ^ 32; 
    printf("%c", x);

    return 0;
}