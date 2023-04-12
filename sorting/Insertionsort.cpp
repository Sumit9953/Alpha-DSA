#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,1,5,4,7,6};

    int n = sizeof(arr)/sizeof(int);

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i-1;

        while (prev >= 0 && curr < arr[prev])
        {
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
        
    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}