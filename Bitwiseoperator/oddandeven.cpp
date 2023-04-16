#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    if((x & 1 ) == 0){
        cout<<"even nuber";
    }else {
        cout<<"odd number";
    }

    return 0;
}