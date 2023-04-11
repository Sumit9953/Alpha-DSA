#include<iostream>
#include<climits>
using namespace std;

// Using Prefix

int main(){

    int arr[] = {2, 4, 6, 8, 10, 12};

    int n = sizeof(arr) / sizeof(int);

    int count = 0;
    int sum = 0;

    int prefix[n];

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1]+arr[i];
    }
    

    int maxSumofSubarray = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = i == 0 ? prefix[j] : prefix[j]-prefix[i-1];
        }

        maxSumofSubarray = max(sum , maxSumofSubarray);
    }

    cout<<maxSumofSubarray;

    return 0;
}