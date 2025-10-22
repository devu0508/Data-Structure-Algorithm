#include <iostream>
using namespace std;

int main(){
int a, b;
cout<<"Enter the value of a: ";
cin>>a;
cout<<"Enter the value of b: ";
cin>>b;

char op;
cout<<"Enter the operator (+, -, *, /): ";
cin>>op;

switch(op){
  case '+':
    cout<<"Sum is: "<< a + b;
    break;
  case '-':
    cout<<"Difference is: "<< a - b;
    break;
  case '*':
    cout<<"Product is: "<< a * b;
    break;
  case '/':
    if(b != 0)
      cout<<"Quotient is: "<< a / b;
    else
      cout<<"Division by zero error";
    break;
  case '%':
    if(b != 0)
      cout<<"Modulus is: "<< a % b;
    else
      cout<<"Division by zero error";
    break;
  default:
    cout<<"Invalid operator";
}

  return 0;
}