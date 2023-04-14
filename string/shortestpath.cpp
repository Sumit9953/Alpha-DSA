#include<iostream>
#include<cmath>
using namespace std;

int shotestpath(string str){
    int x = 0, y = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'W'){
            x++;
        }else if(str[i] == 'S'){
            y--;
        }else if(str[i] == 'N'){
            y++;
        }else{
            x--;
        }
    }

    int x2 = x*x;
    int y2 = y*y;

    

    return sqrt(x2 + y2);
}

int main(){

    string path = "WNEENESENNN";

    cout<<shotestpath(path);

    return 0;
}