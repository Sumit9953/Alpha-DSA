#include <iostream>
#include<climits>
using namespace std;

int main()
{
    // total subarray = (n * (n+1)) / 2

    int arr[] = {2, 4, 6, 8, 10, 12};

    int count = 0;
    int sum = 0;

    int n = sizeof(arr) / sizeof(int);

    int maxSumofSubarray = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            cout<<sum<<endl;
            maxSumofSubarray = max(maxSumofSubarray , sum);
            sum = 0;
        }
    }

    cout << "Total sub array = " << maxSumofSubarray;
    return 0;
}