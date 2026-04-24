#include <iostream>
using namespace std;

int main(){
    int a, b; 
    cout<<"enter first value: ";
    cin>>a;
    char ch;
    cout<<"choose one operation(*, +, -, /, %): ";
    cin>>ch;
    cout<<"Enter your second value: ";
    cin>>b;

    switch(ch){
        case '*': cout<<"a multiplay b is : "<<a * b;
            break;
        case '-': cout<<"a subtraction b is : "<<a - b;
            break;
        case '+': cout<<"a addition b is : "<<a + b;
            break;
        case '/': cout<<"a divide b is : "<<a / b;
            break;
        case '%': cout<<"a remender b is : "<<a % b;
            break;

        default: cout<<"Please enter a valid operation!";
    }
}