#include <stdio.h>

int main() 
{
   int n, sum = 0;

   printf("Nhap n: ");
   scanf("%d", &n);

   for (int i=1; i<=n; i++) {
      if (i % 3 == 0) {
        sum = sum + i;
      }
   }

   printf("%d", sum); 
}