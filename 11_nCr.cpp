#include <iostream>
using namespace std;

int fact(int x){
    int ans = 1;
    while(x > 0){
        ans = ans * x;
        x--;
    }
    return ans;
}

int nCr(int n, int r){
    int ans = fact(n)/(fact(r) * (fact(n-r)));
    return ans;
}

int main(){
    int n, r;
    cout<<"Enter your (n) value: ";
    cin>>n;
    cout<<"Enter your (r) value: ";
    cin>>r;
    cout<<"Your ncr value is: "<<nCr(n, r);
}