#include <stdio.h>

void main()
{
    long int num, temp;
    int length = 0, max, arr[20], i, j, k;
    char ch = ' ', str[20];

    printf("Enter any long number: ");
    scanf("%ld", &num);

    max = num % 10;
    temp = num;
    while (temp)
    {
        length++;
        k = temp % 10;
        if (k > max)
            max = k;
        temp = temp / 10;
    }
    for (i = length - 1; i >= 0; i--)
    {
        arr[i] = max - (num % 10);
        num = num / 10;
    }
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (arr[j] > 0)
            {
                str[j] = ' ';
                arr[j]--;
            }
            else
                str[j] = 'x';
        }
        str[j] = '\0';
        printf("%s\n", str);
    }
    getchar();
}