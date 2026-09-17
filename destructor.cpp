#include<iostream>
using namespace std;

class Demo{
public:
Demo(){
    cout<<"I am constructor:"<<endl;
}
~Demo(){
    cout<<"I am destructor:"<<endl;
}
};

//inheritance in destructor
class Parent{
    public:
    Parent(){
        cout<<"I am parent constructor"<<endl;
    }
    ~Parent(){
        cout<<"I am parent destructor"<<endl;
    }
};

class Child: public Parent{
    public:
    Child(){
        cout<<"I am child constructor"<<endl;
    }
    ~Child(){
        cout<<"I am child destructor"<<endl;
    }

};


int main(){
    Demo obj;

    //inheritance case:
    Child c1;

    return 0;
}