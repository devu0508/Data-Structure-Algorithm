#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i = 1;
    while(i<=n)
    {
        int j = 1;
        int count = n - i + 1;
        while(j<=count)
        {
            cout<<j<<" ";
            j = j + 1;
        }
        int stars =  1;
        while(stars<=(i-1))
        {
            cout<<"*"<<" ";
            stars = stars + 1;
        }
        int star =1;
        while(star<=(i-1))
    {
        cout<<"*"<<" ";
        star = star + 1;
    }
        int start =( n-i+1 );
        while(start>=1)
        {
            cout<<start<<" ";
            start=start-1;
            

        }
        cout<<endl;
        i = i + 1;
    }
     return 0;
}
