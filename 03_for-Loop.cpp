// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }



// Q.1: sum of 1 to n 
/*#include <iostream>
using namespace std;

 int main() {
    int n;
    cout<<"Enter the value or n : ";
    cin>>n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout<<"The sum of n is : " << sum;
}*/



// Q.2: Fibonacci series
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 0, b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 3; i<=n; i++){
        int nextNumber = a+b;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
    }
    return 0;
} */



// Q.3 Check number is prime or not.
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPrime = 1;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            cout<<n<<" is not a prime number";
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1){
        cout<<n<<" is a prime number";
    }
}*/



