#include <stdio.h>
int main()
{
    char s[1001];
    fgets(s, 1001, stdin);
    int Capital = 0;
    int Small = 0;
    int Spaces = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 32)
        {
            Spaces++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            Small++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            Capital++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", Capital, Small, Spaces);
    return 0;
}