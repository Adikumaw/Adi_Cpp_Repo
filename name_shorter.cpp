#include <bits/stdc++.h>
// #include <sstream>

using namespace std;

int word_check(string &name);
int last_word_count(const string &name);
void sir_name(string &word, const string &name);

int main()
{
    int words_num{0};
    string name, word, new_name{};
    cout << "Enter the user name: ";
    getline(cin, name);

    // NUMBER OF WORDS IN STRING CHECKER...............
    words_num = word_check(name);

    if (words_num > 2)
    {
        stringstream ss;
        ss.str("");
        ss << name;
        for (int i{0}; i < 2; i++)
        {
            ss >> word;
            new_name += word[0] + ".";
        }
        // SIR NAME EXTRACTOR IN VARIABLE WORD .............
        sir_name(word, name);
        new_name += word;
        cout << "Short name is: " << new_name << endl;
    }
    else
        cout << "The name is already short: " << name << endl;
    return 0;
}

void sir_name(string &word, const string &name)
{
    int num;
    // LAST WORD'S SIZE FINDER .................
    num = last_word_count(name);
    word = "";
    for (int i{num}; i > 0; i--)
    {
        word = word + *(name.end() - i);
    }
}
int last_word_count(const string &name)
{
    char ch{};
    int i{0};
    for (i = 1; ch != ' '; i++)
    {
        ch = *(name.end() - i);
    }
    return i - 1;
}

int word_check(string &name)
{
    int i{0};
    string word;
    stringstream ss;
    ss.str("");
    ss << name;
    while (ss)
    {
        ss >> word;
        i++;
    }
    return i - 1;
}