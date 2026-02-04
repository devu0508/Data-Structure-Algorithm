#include<iostream>
using namespace std;

void print(int arr[],int start, int end){

    for(int i = start; i<= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int *arr, int start , int end, int key) {
    cout << endl;
    print(arr,start,end);

    // base case
    if(start>end)
       return false;
    
    int mid = start + (end - start)/2;
    cout << " Value of mid is: " << arr[mid] << endl;

    //element found
    if(arr[mid] == key)
    return true;
    
    if(arr[mid] < key) {
       return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}

int main() {
    int arr[6] = {2,4,6,10,16,19};
    int size = 6;
    int key = 16;

   cout << " Present or not : " << binarySearch(arr, 0, 6,key) << endl;

    return 0;
}