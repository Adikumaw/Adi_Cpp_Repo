#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void output(vector<int> &query, vector<int> &vect, int &comp);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout << "-------------------------------------------------- \nSample Input\n8 //number of integer to be put in vector...\n1 1 2 2 6 9 9 15\n4 //number of queries to be asked....\n1\n4\n9\n15\n\nSample Output\n Yes 1\n No 5\n Yes 6\n Yes 8\n-------------------------------------------------- \n"
         << endl;
    int n, temp, quer, q, comp;
    vector<int> vect, query;
    cout << "Enter the number of integers: ";
    cin >> n;
    cout << "Enter the numbers:- " << endl;
    for (int i{0}; i < n; i++)
    {
        cin >> temp;
        vect.push_back(temp);
    }
    cout << "Enter the number of queries: ";
    cin >> quer;
    cout << "Enter the queries:- " << endl;
    for (int i{0}; i < quer; i++)
    {
        cin >> q;
        query.push_back(q);
    }
    cout << "the resultes are:- " << endl;
    output(query, vect, comp);

    return 0;
}

void output(vector<int> &query, vector<int> &vect, int &comp)
{
    for (size_t i{0}; i < query.size(); i++)
    {
        vector<int>::iterator pos;
        pos = lower_bound(vect.begin(), vect.end(), query.at(i));
        comp = (pos - vect.begin());

        if (vect.at(comp) == query.at(i))
            cout << "Yes"
                 << " " << comp + 1 << endl;
        else
            cout << "No"
                 << " " << comp + 1 << endl;
    }
}