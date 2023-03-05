#include <stdio.h>

int main()
{
    int n, temp;
    int m[100];
    printf("Nhap n:");
    scanf("%d", &n);
    // Nhập
    for (int i = 0; i < n; ++i) 
    { 
        scanf("%d", &m[i]); 
    }
    // Sắp xếp
    for(int i = 0 ; i < n - 1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if(m[i] > m[j])
            {
                temp = m[j];
                m[j] = m[i];
                m[i] = temp;
            }
        }
    }
    // In
    for(int i = 0; i< n; ++i)
    {
        printf("%d ", m[i]);
    }
    return 0;
}