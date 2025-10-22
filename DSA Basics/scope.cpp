#include <iostream>
using namespace std;

int main(){
// int a;
// cout<< a << endl;
 int a = 3;
 cout<< a <<endl;
 if(true) {
    int a = 5;
    cout<< a <<endl;
 }

 cout<< a << endl;

 int b = 1;
 cout << b <<endl;
 
//  int b = 2;
//  cout<< b <<endl;   //We can't redefine b.

for(int i=0; i<8; i++)
{
    cout<<" Hi "<< endl;
}

//We can't make same variable under same block.
//We can make same variable under diffrent block.
if(1)
{
    int b;
    if(1)
 {
    int b;
    if(1)
    {
         int b;
    }
  }
}

  return 0;
}