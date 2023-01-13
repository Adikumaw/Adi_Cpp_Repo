#include <stdio.h>

void shift(char str[], int pos);

int main()
{
    int i, p, end, start, s = 0;
    char str[100];

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i]; i++)
    {
        s++;
        if (s == 1)
        {
            for (; str[i] != ' '; i++)
                end = i;
        }
        for (start = 0; start <= end; start++)
        {
            if (str[start] == str[i])
            {
                shift(str, i);
                i--;
                break;
            }
        }
    }
    printf("the new string is: %s", str);

    printf("Press any key to continue.....");
    getchar();
    return 0;
}
void shift(char str[], int pos)
{
    for (; str[pos]; pos++)
        str[pos] = str[pos + 1];
}