#include <iostream>
using namespace std;

int main() {
    int amount;
    cout<<"Enter your amount: ";
    cin>>amount;

    switch(1){
        case 1: cout<<"In this amount 100 note is: "<<amount/100<<endl;
                amount = amount%100;
        case 2: cout<<"In this amount 50 note is: "<<amount/50<<endl;
                amount = amount%50;
        case 3: cout<<"In this amount 20 note is: "<<amount/20<<endl;
                amount = amount%20;
        case 4: cout<<"In this amount 1 note is: "<<amount/1;
    }
}