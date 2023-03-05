#include <stdio.h>

int main()
{
    int n;
    int m[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap day so: ");
    // Nhập
    for(int i = 0 ; i < n; ++i)
    {
        scanf("%d", &m[i]);
    }
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    // Tạo biến để lưu kết quả
    int ketqua = 0;

    // Số lương phần tử
    for(int i = 0; i < n;++i)
    {
        if(m[i] == x)
        {
            ketqua++;
        }
    }
    printf("%d", ketqua);
}