#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[] = {2, 4, 6, 8, 10, 12};

    int n = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if(sum > maxSum){
            maxSum = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    cout<<maxSum<<endl;

    return 0;
}