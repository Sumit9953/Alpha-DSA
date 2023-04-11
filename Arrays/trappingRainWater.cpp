#include<iostream>
using namespace std;

int main(){

    int height[] = {4,2,0,6,3,4,5};

    int n = sizeof(height) / sizeof(int);

    //Calculate left most boundary - array

    int LeftMax[n];

    LeftMax[0] = height[0];

    for(int i = 1;i<n;i++){
        LeftMax[i] = max(height[i] , LeftMax[i-1]);
    }

    //Calculate right most boundary - array
    int RightMax[n];

    RightMax[n-1] = height[n-1];

    for(int i = n-2;i>=0;i--){
        RightMax[i] = max(height[i] , LeftMax[i+1]);
    }

    //loop
    int TrappedWater = 0;
    for (int i = 0; i < n; i++)
    {
        // Waterlevel = min(leftmax bound , rightmax bound)
        int waterLevel = min(LeftMax[i],RightMax[i]);


        // TrappedWater = Waterlevel - height[i];
        TrappedWater += waterLevel - height[i];
    }
    
    cout<<TrappedWater;

    return 0;
}