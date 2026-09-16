#include<iostream>
#include<string>
using namespace std;

int main(){

    int* p; //pointer_created
    int* a; //array 

    p = new int(17); //dynamically memory allocated
    cout<<*p<<endl;
    delete p; //free memory to avoid memory leak

    a = new int[5];
    delete[] a;



    return 0;
}