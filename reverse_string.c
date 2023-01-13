#include <stdio.h>

void main()
{
    int fir[20], sec[20], i, sec_t = 0, s = 0, j;
    char str[100];

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i]; i++)
        if (str[i] == ' ')
        {
            s++;
            fir[s] = i + 1;
            sec[sec_t] = i - 1;
            sec_t++;
        }
    fir[0] = 0;
    sec[sec_t] = i - 2;
    char ch = ' ';
    for (i = s; i >= 0; i--)
    {
        for (j = fir[i]; j <= sec[i]; j++)
            printf("%c", str[j]);
        printf("%c", ch);
    }
    printf("\n\nPress any key to continue.....");
    getchar();
}