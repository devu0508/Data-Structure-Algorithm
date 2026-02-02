#include<iostream>
using namespace std;

int main() {

    // int n;
    // cin >> n ;

    //if no. of rows and columns are diffrent

    int row;
    cin >> row;
    int column;
    cin >> column;

    //creating 2D array
    int** arr = new int*[row];

    for(int i = 0; i<row; i++){
        arr[i] = new int[column];
    }

    //creation of 2D array done
    
    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin >> arr[i][j];
        }
    }

    //printing input
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << arr[i][j] << " ";

        }cout << endl;
    }

    //releasing memory
    for(int i = 0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;

    //Memory freeeee

    return 0;
}