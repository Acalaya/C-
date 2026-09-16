#include<iostream>
#include<string>
using namespace std;

void func(int c=5){ //default argument
    cout<<c<<endl;
}
int main(){

    func();
    func(99);
    return 0;


}

