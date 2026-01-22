#include <iostream>
using namespace std;
//1 ->Even
//0 ->Odd
bool isEven(int num) {
    if(num&1){
        return 0;

    }
    return 1;

}

int main(){
int num;
cin>>num;

if (isEven(num)){
    cout<<"Number is even"<<endl;
}
else{
cout<<"Number is odd"<<endl;
}

// if((num&1)==0)
// cout<<"Even";
// else
// cout<<"Odd";
  return 0;
}