#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, code, num{0};
    long int test{0}, tens{1};
    string str, invalid;
    cout << "Enter the number of user_names: ";
    cin >> a;
    cout << "Enter the user_names...." << endl;
    for (int i{0}; i < a; i++)
    {
        cin >> str;
        if (i > 0)
        {
            tens *= 10;
        }

        if (str.length() <= 5 && str.length() >= 3)
        {
            test += 1 * tens;
        }
        else if (str.length() >= 1 && str.length() <= 2)
        {
            if (str.length() == 1)
            {
                invalid += 'A';
            }
            else
            {
                invalid += 'b';
            }
            test += 2 * tens;
        }
        else if (str.length() > 5)
        {
            test += 3 * tens;
        }
    }
    for (int i{0}, z{0}; i < a; i++)
    {
        code = test % 10;
        if (code == 1)
        {
            cout << "Valid" << endl;
        }
        else if (code == 2)
        {
            if (invalid[z] == 'A')
            {
                num = 1;
            }
            else
            {
                num = 2;
            }
            z++;
            cout << "Too short: " << num << endl;
        }
        else if (code == 3)
        {
            cout << "Invalid" << endl;
        }
        test = test / 10;
    }
    return 0;
}