#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    //base case
    if(n == 0 || n == 1)
    return ;

    //1 case solve karlia - Largest element at the end rkh diya
    for(int i = 0; i<n; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr,n-1);
}
int main() {

    int arr[5] = {2,7,9,4,6};

    sortArray(arr,5);

    for(int i=0; i<5; i++){

        cout << arr[i] << " " ;
    }
    
    return 0;
}