#include <iostream>
using namespace std;
int power(){
  int a, b;
  cin>>a>>b;

  int ans = 1;

  for(int i = 1; i<=b; i++){
    ans = ans * a;
  }

  return ans;

}

int main(){
// //power(a,b)
// int a , b;

// cin>>a>>b;

// int ans = 1;
// for(int i = 1; i<=b; i++){
//     ans = ans * a;
    
// }

// cout << "Power is: " << ans <<endl;;


// int c , d;

// cin>>c>>d;

//  ans = 1;
// for(int i = 1; i<=d; i++){
//     ans = ans * c;
    
// }

// cout << "Power is: " << ans <<endl;

int ans = power();
cout<< "Answer is:"<< ans <<endl;


  return 0;
}