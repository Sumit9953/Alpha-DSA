#include<iostream>
using namespace std;

int Binary_search(int arr[] , int n , int x){
    int left = 0;
    int right = n-1;

    

    while(left <= right){
        int mid = (left + right) / 2;

        if(x == arr[mid]){
            return mid;
        }else if(x < arr[mid]){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return -1;
}

int main(){

    int arr[] = {2,4,6,8,10,12,14};

    int x;
    cin>>x;

    int n = sizeof(arr)/sizeof(int);

    int at = Binary_search(arr , n ,x);

    cout<<"Element at a index "<<at;

    return 0;
}