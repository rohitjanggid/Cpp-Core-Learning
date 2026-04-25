#include <iostream>
using namespace std;

int setBits(int n){
    int count = 0;
    while(n != 0){
        int bit = n&1; 
        if(bit == 1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout<<"Enter your value (a): ";
    cin>>a;
    cout<<"Enter your value (b): ";
    cin>>b;
    int result = setBits(a) + setBits(b);
    cout<<"total setbits is: "<<result;
}