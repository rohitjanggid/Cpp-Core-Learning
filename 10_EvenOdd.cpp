#include <iostream>
using namespace std;

bool evenOdd(int num){
    if (num % 2 == 0){
        return 1;
    }
    return 0;
}


int main(){
    int num;
    cin>>num;
    if(evenOdd(num)){
        cout<<"Number is even";
    }else{
        cout<<"Number is odd";
    }
}