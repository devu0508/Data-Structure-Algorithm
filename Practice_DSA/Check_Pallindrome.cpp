#include<iostream>
#include<vector>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch<='z')
    return ch;
    else{
        char temp = ch - 'A' + 'a'; 
        return temp;
    }
}
bool checkPalindrome(char a[],int n) {
        int start = 0;
        int end = n-1;
        while(start<=end){
            if(toLowerCase(a[start]) != toLowerCase(a[end] ) ){
                return 0;
            }
            
            else{
                start++;
                end--;
            }

        } 
        return 1;  
        
    }

    int getLength( char name[]){
    int count = 0;
    for(int i = 0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){

    char name[10];

    cout<<"Enter the name: " <<endl;
    cin>>name;
     int len = getLength(name);

    cout<<"Palindrome or not: "<< checkPalindrome(name,len) <<endl;
    
    cout<< "Character is "<< toLowerCase('b') << endl;
    cout<< "Character is "<< toLowerCase('C') << endl;

    return 0;

}