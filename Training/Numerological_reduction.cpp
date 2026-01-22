#include<iostream>
using namespace std;

int sum_digits(int num){
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    if(sum>9)
    return sum_digits(sum);
    else
    return sum;
}

int main() {
    int num;
    cin>>num;
    cout<<sum_digits(num)<<endl;
    return 0;
}