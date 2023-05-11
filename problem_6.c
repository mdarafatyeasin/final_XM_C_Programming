#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int Tiger = 0;
    int Pathan = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] > arr[i][1])
        {
            Tiger++;
        }
        else if (arr[i][0] < arr[i][1])
        {
            Pathan++;
        }
        else if (arr[i][0] == arr[i][1])
        {
            Tiger = Tiger + 0;
            Pathan = Pathan + 0;
        }
    }
    if(Tiger>Pathan){
        printf("Tiger");
    }else if (Tiger<Pathan)
    {
        printf("Pathan");
    }else{
        printf("Draw");
    }
    
    return 0;
}