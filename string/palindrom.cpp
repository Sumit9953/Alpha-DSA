#include <iostream>
using namespace std;

bool palindrom(string str)
{
    int st = 0;
    int ed = str.size() - 1;

    while (st <= ed)
    {
        if (str[st] != str[ed])
        {
            return false;
        }
        st++;
        ed--;
    }

    return true;
}

int main()
{

    string str = "aabjaa";

    cout << palindrom(str);

    return 0;
}