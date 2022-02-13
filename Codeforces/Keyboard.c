#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, l;
    char c;
    char str[100];
    char str1[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '\0'};
    char str2[] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\0'};
    char str3[] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', '\0'};
    scanf("%c", &c);
    scanf("%s", &str);
    l = strlen(str);
    if (c == 'L')
    {
        for (i = 0; i <= l; i++)
        {
            for (j = 9; j >= 0; j--)
            {
                if (str[i] == str1[j])
                {
                    str[i] = str1[j + 1];
                }
                else if (str[i] == str2[j])
                {
                    str[i] = str2[j + 1];
                }
                else if (str[i] == str3[j])
                {
                    str[i] = str3[j + 1];
                }
            }
        }
    }
    if (c == 'R')
    {
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (str[i] == str1[j])
                {
                    str[i] = str1[j - 1];
                }
                else if (str[i] == str2[j])
                {
                    str[i] = str2[j - 1];
                }
                else if (str[i] == str3[j])
                {
                    str[i] = str3[j - 1];
                }
            }
        }
    }
    printf("%s", str);
    return 0;
}