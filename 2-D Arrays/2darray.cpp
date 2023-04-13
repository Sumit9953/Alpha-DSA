#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[3][3] = {{1,2,3} , {4,50,6} , {7,8,9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
        
    }

    int maxElement = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            maxElement = max(maxElement , arr[i][j]);
        }
        
    }

    cout<<"Max element is "<<maxElement;
    
    return 0;
}