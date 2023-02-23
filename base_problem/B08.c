#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char x = 'a';
    printf("Kí tự hiện tại là %c\n", x);

    // Kí tự x chuyển về kiểu viết hoa
    x = toupper(x); 
    printf("Kí tự đã chuyển là %c\n", x);

    return 0;
}
