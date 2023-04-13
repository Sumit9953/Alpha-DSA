#include<iostream>
using namespace std;

int main(){

    int arr[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }

     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(i == j){
                sum += arr[i][j];
            }else if(i+j == 4-1){

             sum += arr[i][j];
            }
        }
    }
    
    cout<<sum<<endl;

    return 0;
}