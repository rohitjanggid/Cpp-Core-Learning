#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter binary number: ";
    cin>>n;
    int sum = 0;
    int i = 0;
    while(n != 0){
        int remender = n%10;
        if(remender == 1){
            int value = pow(2, i);
            sum += value;
        }
        i++;
        n = n/10;
    }
    cout<<" Decimal value is : "<<sum ;
}