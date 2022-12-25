#include <iostream>

using namespace std;

int main()
{
    int arr[10]{}, temp{};

    cout << "enter any ten value: ";

    for (size_t i{0}; i < 10; i++)
        cin >> arr[i];

    for (size_t i{0}; i < 10; i++)
        for (size_t j{0}; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    for (size_t i{0}; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}