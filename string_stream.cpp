
//     Operator >> Extracts formatted data.
//     Operator << Inserts formatted data.
//     Method str() Gets the contents of underlying string device object.
//     Method str(string) Sets the contents of underlying string device object.

//     Its header file is sstream.
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout << "--------------------- STRING STREAM ---------------------" << endl;
    cout << "---------------------------------------------\nSample Input\n\n23,4,56\n\nSample Output2\n\n3\n4\n56\n---------------------------------------------\n"
         << endl;
    int n;
    char ch;
    vector<int> numb;
    string str;
    cout << "Enter the string of number saparated with commas: ";
    getline(cin, str);

    stringstream ss(str);
    for (int i{0}; ss; i++)
    {
        ss >> n >> ch;
        numb.push_back(n);
    }
    cout << "\nSepated vector of integers is:-" << endl;
    for (size_t i{0}; i < numb.size(); i++)
        cout << numb.at(i) << endl;

    return 0;
}