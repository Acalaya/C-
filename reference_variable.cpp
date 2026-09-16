#include<iostream>
#include<string>
using namespace std;

int main(){


    int a = 5;
    int &b=a; //reference variable

    cout<<a<<endl;
    cout<<b<<endl;

    b++;
    cout<<a<<endl;
    return 0;
}