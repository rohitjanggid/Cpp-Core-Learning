#include <iostream>
using namespace std;

// int main(){
//     int array[15] = {2,7};
//     for(int i = 0; i<15; i++){
//         cout<<array[i]<<" ";
//     }

// }




// int main(){
//     int n;
//     cout<<"Enter your value: ";
//     cin>>n;
//     int array[n];
//     for(int i = 0; i<n; i++){
//         array[i] = 1;
//         cout<<array[i]<<" ";
//     }
// }




// int main(){
//     int n;
//     cout<<"Enter your value: ";
//     cin>>n;
//     int array[n];
//     int value = 1;
//     for(int i = 0; i<n; i++){
//         array[i] = value;
//         cout<<array[i]<<" ";
//         value++;
//     } 
// }


void printArr(int arr[], int size){
    int num = 1;
    for(int i = 0; i<size; i++){
        arr[i] = num;
        cout<<arr[i]<<" ";
        num++;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n]; 

    printArr(arr, n);
    cout<<endl;
    int printSize = sizeof(arr)/sizeof(int);
    cout<<printSize;
}