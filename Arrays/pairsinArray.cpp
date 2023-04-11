#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,4,6,8,10,12,14};

    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<") ";
        }
        
        cout<<endl;
    }
    
    // Total number of pairs = (n * (n-1)) / 2


    return 0;
}