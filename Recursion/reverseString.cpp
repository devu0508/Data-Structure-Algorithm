#include<iostream>
using namespace std;
void reverse(string& s,int i, int j){
    cout<< " call received for: " << s << endl;
    //base case
    if(i>j)
    return ;

swap(s[i],s[j]);
i++;
j--;

//Recursive call
reverse(s,i,j);
}
int main() {
    string name = "Divyansh";
    cout<< endl;

    reverse(name,0,name.length()-1);
    cout<< endl;

    cout << name << endl;
    
    return 0;
}