#include<iostream>
using namespace std;

class MyClass { //class created
public:

static int a;
void display();

};

int MyClass::a=5; //access static class from out using resolution operator ::
void MyClass::display(){ //define member variables outside class
    cout<<a<<endl;
}

int x=79; //global variable

int main() {
    int x=54; //local variable
    cout<<x<<endl;
    cout<<::x<<endl; //access global variable when local variable has same name

    MyClass obj1; //object created
    obj1.display(); //method call

    return 0;
}



