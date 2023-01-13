#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student
{
private:
    vector<int> scores;

public:
    void input(int a, int b, int c, int d, int e)
    {
        scores.push_back(a);
        scores.push_back(b);
        scores.push_back(c);
        scores.push_back(d);
        scores.push_back(e);
    }
    int calc_total_score()
    {
        int sum{0};
        for (auto arr : scores)
        {
            sum = sum + arr;
        }
        return sum;
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int std, score_1, score_2, score_3, score_4, score_5;
    cin >> std;
    vector<student> s1(std);
    for (int i = 0; i < std; i++)
    {
        cin >> score_1 >> score_2 >> score_3 >> score_4 >> score_5;
        s1[i].input(score_1, score_2, score_3, score_4, score_5);
    }
    int kristen, temp_2{0};
    kristen = s1.at(0).calc_total_score();
    for (int i = 0; i < std; i++)
    {
        if (kristen < s1.at(i).calc_total_score())
        {
            temp_2++;
        }
    }
    cout << temp_2;

    return 0;
}