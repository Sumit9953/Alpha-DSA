#include<iostream>
using namespace std;

void spiral(int arr[][4] , int n){
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = n-1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // TOP
        for (int i = startCol; i <= endCol; i++)
        {
            cout<<arr[startRow][i]<<" ";
        }

        //Right
        for (int j = startRow+1; j <= endRow; j++)
        {
            cout<<arr[j][endCol]<<" ";
        }

        //Bottom
        for (int i = endCol-1; i >= startCol; i--)
        {
            if(startRow == endRow){
                break;
            }
            cout<<arr[endRow][i]<<" ";
        }

        //Left 
        for (int j = endRow-1; j >= startRow+1; j--)
        {
            if(startCol == endCol){
                break;
            }
            cout<<arr[j][startCol]<<" ";
        }
        
        startRow++;
        startCol++;
        endCol--;
        endRow--;
    }
    
}

int main(){

    int arr[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }

     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    spiral(arr , 4);

    //Zig-Zag matrix

    // for (int i = 0; i < 4; i++)
    // {
    //     if(i%2 == 0){
    //         for (int j = 0; j < 4; j++)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         } 
    //     }else{
    //         for (int j = 4-1; j >= 0; j--)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }


    

    


    return 0;
}