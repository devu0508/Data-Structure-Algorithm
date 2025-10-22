#include <iostream>
using namespace std;

int main(){
int n;
cout<< " Enter the the number : " << endl;
cin>> n ;
//int i = 1;
int i = 2;
int sum = 0;
while(i<=n){
    sum = sum+i;
    //i = i+1;
    i = i+2;
}
cout<<" The value of the sum is: " << sum << endl;
  return 0;
}