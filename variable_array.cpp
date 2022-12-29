#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, j, q, k;

    cout << "Enter the number of array and number of querry: ";
    cin >> n >> q;

    vector<vector<int>> arr;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the number of elements and elements of array " << (i + 1) << " : ";
        cin >> k;
        arr.push_back(std::vector<int>());

        for (int y = 0; y < k; y++)
        {
            cin >> j;
            arr[i].push_back(j);
        }
    }

    for (int z = 0; z < q; z++)
    {
        cout << "Enter the i and j element ( eg. arry[i][j]; ): ";
        cin >> i >> j;
        cout << "the value is: " << arr.at(i - 1).at(j - 1) << endl;
    }

    return 0;
}
