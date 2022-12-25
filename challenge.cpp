#include <iostream>
#include <vector>
using namespace std;

void add(vector<int> &list);
void print(const vector<int> &list);
void small(const vector<int> &list);
void larg(const vector<int> &list);
void mean(const vector<int> &list);
int main()
{
    char input{};
    vector<int> list{};
    do
    {
        // options list...
        cout << "----------------------------------------\nwelcome to moduler programme:- \nP : To print all the data in the vector\nA : To add any data to the vector.\nS : To find the smallest number.\nL : To find the largest number.\nM : To find the mode of the data.\nQ : To quit the programme.\nEnter any option: ";
        cin >> input;

        // process options..
        if (input == 'a' || input == 'A')
            add(list);
        else if (input == 'p' || input == 'P')
            print(list);
        else if (input == 's' || input == 'S')
            small(list);
        else if (input == 'l' || input == 'L')
            larg(list);
        else if (input == 'M' || input == 'm')
            mean(list);
        else if (input == 'q' || input == 'Q')
            ;
        else
            cout << "enter any valid option..." << endl;

    } while (input != 'q' && input != 'Q');
    return 0;
}

// functions declarations....

void mean(const vector<int> &list)
{
    int temp{};
    if (list.size() != 0)
    {
        for (auto a : list)
        {
            temp += a;
        }
        temp /= list.size();
        cout << temp << endl;
    }
    else
        cout << "enable to calculate mean, No data..." << endl;
}

void larg(const vector<int> &list)
{
    if (list.size() != 0)
    {
        int temp{list.at(0)};
        for (auto a : list)
        {
            if (temp < a)
                temp = a;
        }
        cout << temp << endl;
    }
    else
        cout << "there is no data to find..." << endl;
}
void small(const vector<int> &list)
{
    if (list.size() != 0)
    {
        int temp{list.at(0)};
        for (auto a : list)
        {
            if (temp > a)
                temp = a;
        }
        cout << temp << endl;
    }
    else
        cout << "there is no data to find..." << endl;
}
void print(const vector<int> &list)
{
    if (list.size() != 0)
    {
        cout << "[ ";
        for (size_t a : list)
            cout << a << ' ';
        cout << ']' << endl;
    }
    else
        cout << "[] - the list is empty..." << endl;
}

void add(vector<int> &list)
{
    int num{};
    cout << "enter any number to add: ";
    cin >> num;
    list.push_back(num);
    cout << num << " added to the list..." << endl;
}