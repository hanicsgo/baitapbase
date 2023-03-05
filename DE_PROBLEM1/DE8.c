#include <stdio.h>

int main() 
{
   int n, sum = 0;

   printf("Nhap n: ");
   scanf("%d", &n);
    // 
    for (int i=1; i<=n; i++) {
      if (n % i == 0) 
      {
        sum +=i; // Cộng thêm giá trị của i vào giá trị hiện tại của biến
      }
   }

   printf("%d", sum); 
}
