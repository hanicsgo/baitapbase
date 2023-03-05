#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    printf("Nhap chuoi s: ");
    gets(s); 
    int dem =0;
    for(int i=0; i<(int) strlen(s); i++){
           if (s[i]>='A' && s[i]<='Z'){
                dem++;
           }
    }
    printf("%d", dem);
}