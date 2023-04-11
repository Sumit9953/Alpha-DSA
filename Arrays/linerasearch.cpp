#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int x){
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == x){
                return i;
            }
        }
    return -1;
}

int main(){

    int arr[] = {2,4,6,8,10,12,14};

    int x;
    cin>>x;

    int n = sizeof(arr)/sizeof(int);

    int at = linear_search(arr , n ,x);

    cout<<"Element at a index "<<at;


    return 0;
}