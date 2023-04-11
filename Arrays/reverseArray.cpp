#include<iostream>
using namespace std;

void reverseArray(int arr[] , int n){
    int start = 0;
    int end = n-1;

    for (int start = 0; start <= end; start++)
    {
        swap(arr[start] , arr[end--]);
    }
    
}

int main(){

    int arr[] = {2,4,6,8,10,12,14};

    int n = sizeof(arr)/sizeof(int);

    reverseArray(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}