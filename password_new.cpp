#include <iostream>
#include <string>

using namespace std;
int main()
{
    string pass{"nothing"};
    string epass;
    char alpha;
    cout << "Enter the password: ";
    for (size_t i{0}; i < pass.size(); ++i)
    {
        if (alpha == '13')
        {
            break;
        }
        else
            ;
        epass += alpha;
        continue;
    }
    cout << "\nyou entered: " << epass << endl;

    return 0;
}