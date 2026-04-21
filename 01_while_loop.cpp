#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
        int j = i;
        int count1 = 1;
        while(j <= n){
            cout<<count1;
            count1 += 1;
            j += 1;
        }
        int star1 = i -1;
        while(star1){
            cout<<"*";
            star1 -= 1;
        }
        int star2 = 1;
        while(star2 < i){
            cout<<"*";
            star2 += 1;
        }
        int k = i;
        while(k <= n){
            cout<<n-k+1;
            k += 1;
        }
        cout<<endl;
        i += 1;
    }
    return 0;
}
