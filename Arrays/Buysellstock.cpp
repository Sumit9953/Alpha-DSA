#include<iostream>
#include<climits>
using namespace std;

int main(){

    int prices[] = {7,1,5,3,6,4};

    int n = sizeof(prices) / sizeof(int);

    int buyPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        if(buyPrice < prices[i]){
            int profit = prices[i]-buyPrice;
            maxProfit = max(maxProfit , profit);
        }else{
            buyPrice = prices[i];
        }
    }
    
    cout<<maxProfit;

    return 0;
}