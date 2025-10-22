#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter the number:" ;
cin >> n;
int i = 2;
while (i<n){
    //divide hogya, not prime
    if (n%i==0){
       cout<< "Not Prime";
    }
    else{
        cout << "Prime";
    }
    i = i+1;
}
  return 0;
}