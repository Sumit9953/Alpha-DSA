#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,1,5,4,7,6};

    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n-1; i++)
    {
        int minPos = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[minPos] > arr[j]){
                minPos = j;
            }
        }
        swap(arr[minPos] , arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}