#include <iostream>
using namespace std;

bool search(int arr[4][4], int n, int key)
{
    int row = 0;
    int col = n - 1;

    while (row < n && col >= 0)
    {
        if (key == arr[row][col])
        {
            cout << "found at " << row << " , " << col;
            return true;
        }
        else if (key < arr[row][col])
        {
            col--;
        }
        else
        {
            row++;
        }
    }

    return false;
}

int main()
{
    // Time complexcity = O(n+m)

    int arr[4][4] = {{1, 3, 5, 7},
                     {10, 11, 16, 22},
                     {23, 30, 34, 60},
                     {33, 35, 38, 65}};

    search(arr, 4, 10);

    return 0;
}