#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int product = 1;
int sum = 0;
while(n!=0){
  int remainder = n%10;
  product = product * remainder;
  sum = sum + remainder;
  n = n/10;
}
int answer = product - sum;
cout<<answer;
  return 0;
}