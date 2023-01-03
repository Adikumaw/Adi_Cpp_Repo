#include <bits/stdc++.h>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <sstream>
// #include <map>
// #include <cmath>

using namespace std;

void head();
void input(string info, const int &end_point, string &temp, vector<string> &vect);
void symb_remov(string &temp);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, quer, i;
    string temp;
    vector<string> hrml;
    vector<string> query;

    // HEADITNG PRINTER ............
    head();
    cout << "Enter the List.no and the Queries.no: ";
    cin >> num >> quer;
    cout << endl;
    cin.ignore();
    // INPUT TAKER FROM USER ..................
    input("Enter list ", num, temp, hrml);
    cout << endl;
    input("Enter query ", quer, temp, query);

    vector<string> tag;
    map<string, string> m;

    for (i = 0; i < num; i++)
    {
        temp = hrml[i];
        if (temp.substr(0, 2) == "</")
        {
            tag.pop_back();
        }
        else
        {
            // SYMBOL REMOVER ...........
            symb_remov(temp);
            stringstream ss;
            ss.str("");
            ss << temp;
            string t1, n1, v1;
            char c1{};

            ss >> t1 >> n1 >> c1 >> v1;

            if (tag.size() > 0)
                temp = *tag.rbegin() + "." + t1;
            else
                temp = t1;

            tag.push_back(temp);
            m[*tag.rbegin() + "~" + n1] = v1;
            while (ss)
            {
                ss >> n1 >> c1 >> v1;
                m[*tag.rbegin() + "~" + n1] = v1;
            }
        }
    }
    cout << "\nvalues at queries are: \n"
         << endl;
    for (i = 0; i < quer; i++)
    {
        cout << query[i] << " : ";
        if (m.find(query[i]) == m.end())
            cout << "Not Found!" << endl;
        else
            cout << m[query[i]] << endl;
    }
    return 0;
}

// FUNCTIONS ...............
void head()
{
    cout << "--------------------------------------\n   HRML MARKUP LANGUAGE\n--------------------------------------" << endl;
    cout << "\n\n------------------------------- EXAMPLE ----------------------------------\nHRML listing:  \n<tag1 value = \"value\">\n<tag2 name = \"name\">\n<tag3 another = \"another\" final = \"final\">\n</tag3>\n</tag2>\n</tag1>\n\nQueries:  \ntag1~value\ntag1.tag2.tag3~name\ntag1.tag2~value\n-------------------------------------------------------------------------- \n"
         << endl;
}
void input(string info, const int &end_point, string &temp, vector<string> &vect)
{
    for (int i = 0; i < end_point; i++)
    {
        cout << info << i + 1 << " : ";
        getline(cin, temp);
        vect.push_back(temp);
    }
}
void symb_remov(string &temp)
{
    temp.erase(remove(temp.begin(), temp.end(), '<'), temp.end());
    temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
    temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());
}