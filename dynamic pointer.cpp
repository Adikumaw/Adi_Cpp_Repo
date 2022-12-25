#include <iostream>

using namespace std;

void print(int *array_1, size_t size);
int *apply_all(int *array_1, size_t size_1, int *array_2, size_t size_2);

int main()
{
    int *return_1{nullptr};
    int array_2[]{10, 20, 30};
    int array_1[]{1, 2, 3, 4, 5};

    cout << "array 1: ";
    print(array_1, 5);

    cout << "array 2: ";
    print(array_2, 3);

    return_1 = apply_all(array_1, 5, array_2, 3);

    cout << "new array is: ";
    print(return_1, 5 * 3);

    cout << return_1 << endl;

    delete[] return_1;
    return 0;
}

void print(int *array_1, size_t size)
{
    cout << "[ ";
    for (size_t i{0}; i < size; ++i)
        cout << *(array_1 + i) << " ";
    cout << "]\n";
}

int *apply_all(int *array_1, size_t size_1, int *array_2, size_t size_2)
{
    int *new_storage{nullptr};

    new_storage = new int[size_1 * size_2];

    for (size_t i{0}, k{0}; i < size_2; ++i)
        for (size_t j{0}; j < size_1; ++j, ++k)
            new_storage[k] = *(array_1 + j) * *(array_2 + i);

    return new_storage;
}