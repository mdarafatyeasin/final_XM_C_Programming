#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if (i%2!=0)
            {
                printf("*");
            }else{
                printf("^");
            }
            
        }
        printf("\n");
        k = k + 2;
        s--;
    }
    return 0;
}