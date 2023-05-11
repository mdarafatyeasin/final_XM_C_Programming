#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int arr[t][4];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < t; i++)
    {
        int sum = 0;
        int missingNum = 0;
        for (int j = 1; j < 4; j++)
        {
            missingNum = arr[i][0];
            sum = sum + arr[i][j];
        }
        printf("%d\n",missingNum-sum);
    }
    return 0;
}
