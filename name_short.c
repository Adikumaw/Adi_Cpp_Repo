#include <stdio.h>

int word_check(const char name[]);
int main()
{
    char name[70], word[15], new_name[30];
    int words_num, i, s, x = 5;
    printf("Enter any name to short: ");
    fgets(name, 70, stdin);
    words_num = word_check(name);
    if (words_num > 2)
    {
        for (i = 0; name[i] != ' '; i++)
            ;
        new_name[0] = name[0];
        new_name[1] = '.';
        new_name[2] = name[i + 1];
        new_name[3] = '.';
        new_name[4] = ' '; // ascii for space is 32
        for (i = 0; name[i]; i++)
        {
            if (name[i] == ' ')
                s = i + 1;
        }
        for (int j = s; j < i; j++, x++)
        {
            new_name[x] = name[j];
        }
        printf("the short name is : %s \n", new_name);
    }
    else
        printf("\nThe name is already short enough\n");

    printf("Press any key to continue.......");
    getchar();

    return 0;
}

int word_check(const char name[])
{
    char ch;
    int i, j = 0;
    for (i = 0; name[i]; i++)
    {
        ch = name[i];
        if (ch == 32)
            j++;
    }
    return (j + 1);
}