#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[] = {3,1,5,4,7,6};

    int n = sizeof(arr)/sizeof(int);

    int Largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        Largest = max(Largest , arr[i]);
    }

    int count[Largest+1] = {0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    
    int j = 0;

    for (int i = 0; i < Largest+1; i++)
    {
        while (count[i] > 0 )
        {
            arr[j] = i;
            j++;
            count[i]--;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}