#include<iostream>
using namespace std;

int main() {
    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first << " " << second << endl; //8 and 9

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first  << endl;  //6+1=7

    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << " ";
    // cout << first  << endl;  //8 and 9

    // int *p = 0;
    // int first = 110;
    // p = &first;
    // cout << *p  << endl;  //110

    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;  //11 and 13

    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;


    return 0;
}