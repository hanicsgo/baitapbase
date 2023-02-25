#include <stdio.h>
#include <string.h>

int main() 
{
    char ten[] = "C";
 
    // String function biến đổi thành kí tự viết thường
    strlwr(ten);
    printf("%s", ten);
    return 0;
}