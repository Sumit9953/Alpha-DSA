#include<iostream>
using namespace std;

int main(){

    string str = "aaaabbccd";

    int count[26] = {0};

    for (int i = 0; i < str.size(); i++)
    {
        count[str[i]-'a']++;
    }

    
    
    

    return 0;
}