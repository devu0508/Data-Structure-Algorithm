#include <iostream>
using namespace std;
//1 -> prime no.
//0 -> not a prime no.

bool isPrime(int n ) {

    for( int i = 2; i<n; i++) {
        //divide hogya hai, not a prime no.
        if(n%i==0) {
            return 0;
        }
        


    }

    return 1;
}

int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;
    if (isPrime(n)) {
        cout<<"Prime no."<<endl;

    }
    else{
        cout<<"Not a prime no."<<endl;
    }


  return 0;
}