#include <iostream>
using namespace std;

int square(int a, int b){
    int ans = 1;
    for(int i = 1; i<= b; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<square(a, b);
    return 0;
}