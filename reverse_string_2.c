#include <stdio.h>

int main()
{
    int i, j, end, start;
    char str[100];

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i]; i++)
        ;

    for (i = i - 2; i >= 0; i--)
    {
        for (end = i; str[i] != ' ' && i != -1; i--)
            start = i;
        for (j = start; j <= end; j++)
            printf("%c", str[j]);
        printf(" ");
    }
    printf("\nPress any key to continue.....");
    getchar();
    return 0;
}