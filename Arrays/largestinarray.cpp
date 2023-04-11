#include<iostream>
#include<climits>
using namespace std;

int largest(int arr[],int n){
    int larg = INT_MIN;
    int smallest = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    
    return smallest;
}

int main(){

    int arr[] = {2,1,45,3,43,20 , 99,67,9,-89};

    int n = sizeof(arr)/sizeof(int);

    cout<<"largest number = "<<largest(arr , n);


    return 0;
}