#include<iostream>
using namespace std;

int getithBit(int x ,int i){
    int bitwise = 1<<i;

    if((x & bitwise) == 0){
        return 0;
    }else{
        return 1;
    }
}

int setithBit(int x , int i){
    int bitwise = 1 << i;

    return x | bitwise;
}

int clearithBit(int x,int i){
    int bitwise = ~(1 << i);

    return x & bitwise;
}

int updateithBit(int x,int i,int newbit){
    // if(newbit == 0){
    //     return clearithBit(x , i);
    // }else{
    //     setithBit(x,i);
    // }

    x = clearithBit(x,i);
    int bitmask = newbit<<i;
    return x | bitmask;
}

int main(){
    
    cout<<clearithBit(10,1);

    return 0;
}