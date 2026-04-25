#include <iostream>
using namespace std;

int AP(int n){
    int ans = (3 * n) + 7;
    return ans;
}

int main(){
    int n;
    cout<<"Enter your (n) value: ";
    cin>>n;
    cout<<"Arithmetic progression of "<<n<<" is: "<<AP(n);
}