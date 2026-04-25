#include <iostream>
using namespace std;

int fibo(int n){
    int a = 0, b = 1;
    // cout<<a<<b;
    int sum;
    for(int i = 3; i<= n; i++){
        sum = a + b;
        // cout<<sum;
        a = b;
        b = sum;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    cout<<fibo(n);
}