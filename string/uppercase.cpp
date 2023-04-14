#include<iostream>
#include<cctype>
using namespace std;

int main(){

    string str = "hi, i am sumit";

    string ans;

    ans += (toupper(str[0]));

    for (int i = 1; i < str.size(); i++)
    {
        if(str[i] == ' ' && i < str.length()-1){
            ans += str[i];
            i++;
            ans += toupper(str[i]);
        }else{
            ans += str[i];
        }
    }

    cout<<ans;
    

    return 0;
}