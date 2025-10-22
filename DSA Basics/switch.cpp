#include <iostream>
using namespace std;

int main(){
// char ch = '1';
int num = 2;

cout << endl;

switch( num ){
// switch(ch){                 //constant can be integer or character
  case 1:
    cout << "First";
    break;
  case 2:
    cout << "Second";
    break;
  case '1': switch(num){
       case 1: cout<<"Value of num is"<< num <<endl;
       break;
     }
    break;
  default:
    cout << "It is default case";
}
  return 0;
}