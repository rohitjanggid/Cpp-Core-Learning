# include <iostream>
using namespace std;

int findMax(int arr[], int size){
    int maxValue = arr[0];
    for(int i=0; i<size; i++){
        if(maxValue < arr[i]){
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int findMin(int arr[], int size){
    int minValue = arr[0];
    for(int i=0; i<size; i++){
        if(minValue > arr[i]){
            minValue = arr[i];
        }
    }
    return minValue;
}


int main(){
    int arr[5] = {-9, -12, 0, 11, -22};
    cout<<"Max value is: "<<findMax(arr, 5)<<endl;
    cout<<"Min value is: "<<findMin(arr, 5);
}