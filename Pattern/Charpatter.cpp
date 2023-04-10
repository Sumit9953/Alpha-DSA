#include<iostream>
using namespace std;

int main(){

    char pr = 'A';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<pr++<<" ";
        }

        cout<<endl;
        
    }
    


    return 0;
}